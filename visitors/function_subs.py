#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""Visitor to replace the invocations to functions that have been removed with the controlled function
generation functionality (i.e., ``-f`` or ``--functions`` options)."""

from functools import singledispatch
from core import ast, generators, probs
from params.parameters import get_app_args
from typing import List, Union


@singledispatch
def visit(node, targets: List[str], function: ast.Function, is_statement: bool):
    raise TypeError("Unknown node type: " + node.__class__.__name__)

_program = None

@visit.register(ast.Program)
def _(program: ast.Program, targets: List[str], function: ast.Function = None, is_statement: bool = True) -> ast.Program:
    # Pointers, Struct and Arrays only generate literals in declarations. The normal solution is to
    # generate a lvalue instead, this solution can cause the creation of new functions. The solution to this new problem
    # is to eliminate the probability of invocation before generate a new literal.
    global _program
    _program = program

    new_probs = {False: 1, True: 0}
    old_probs = dict(probs.call_prob)
    probs.call_prob = new_probs

    for function in program.functions:
        visit(function, targets, function, True)
    visit(program.main, targets, program.main, True)

    # Restore the old probability
    probs.call_prob = dict(old_probs)
    return program


@visit.register(ast.Function)
def _(node: ast.Function, targets: List[str], function: ast.Function, is_statement: bool) -> ast.Function:
    node.children = _visit_ast_nodes(node.stmts, targets, node, True)
    return node


@visit.register(ast.Invocation)
def _(invocation: ast.Invocation, targets: List[str], function: ast.Function, is_statement: bool) \
        -> Union[ast.ASTNode, None]:
    if invocation.func_name in targets and not isinstance(invocation.return_type, ast.Void):
        # If invocation is a statement
        if is_statement:
            if get_app_args().verbose:
                print("{}: Remove call {}".format(function.name, invocation.func_name))
            return None
        # If invocation is an expression
        else:
            literal = generators.generate_literal(
                _program, function, invocation.return_type, from_declaration=False)
            if get_app_args().verbose:
                print("{} Subs call {} -> ({}) {}".format(
                    function.name, invocation.func_name, invocation.return_type.name, literal.to_str()))
            return literal
    else:
        invocation.arguments = _visit_ast_nodes(invocation.arguments, targets, function, False)
        return invocation


@visit.register(ast.Assignment)
@visit.register(ast.BinaryExpression)
@visit.register(ast.ArrayAccessExpression)
@visit.register(ast.UnaryExpression)
@visit.register(ast.Return)
@visit.register(ast.StructAccessExpression)
@visit.register(ast.TernaryExpression)
def _(node, targets: List[str], function: ast.Function, is_statement: bool) -> ast.ASTNode:
    node.children = _visit_ast_nodes(node.children, targets, function, False)
    return node


@visit.register(ast.Block)
def _(node: ast.Block, targets: List[str], function: ast.Function, is_statement: bool) -> ast.Block:
    node.statements = _visit_ast_nodes(node.statements, targets, function, True)
    return node


@visit.register(ast.Do)
@visit.register(ast.While)
def _(node, targets: List[str], function: ast.Function, is_statement: bool) -> ast.ASTNode:
    node.condition = visit(node.condition, targets, function, False)
    node.statements = _visit_ast_nodes(node.statements, targets, function, True)
    return node


@visit.register(ast.If)
def _(node: ast.If, targets: List[str], function: ast.Function, is_statement: bool) -> ast.If:
    node.condition = visit(node.condition, targets, function, False)
    node.if_statements = _visit_ast_nodes(node.if_statements, targets, function, True)
    node.else_statements = _visit_ast_nodes(node.else_statements, targets, function, True)
    return node


@visit.register(ast.For)
def _(node: ast.For, targets: List[str], function: ast.Function, is_statement: bool) -> ast.For:
    node.initialization = visit(node.initialization, targets, function, False)
    node.condition = visit(node.condition, targets, function, False)
    node.increment = visit(node.increment, targets, function, False)
    node.statements = _visit_ast_nodes(node.statements, targets, function, True)
    return node


@visit.register(ast.Switch)
def _(node: ast.Switch, targets: List[str], function: ast.Function, is_statement: bool) -> ast.Switch:
    node.condition = visit(node.condition, targets, function, False)
    for case_literal, case_statements in node.cases.items():
        node.cases[case_literal] = _visit_ast_nodes(case_statements, targets, function, True)
    node.default = _visit_ast_nodes(node.default, targets, function, True)
    return node


@visit.register(ast.Literal)
@visit.register(ast.Variable)
@visit.register(ast.Break)
@visit.register(ast.Label)
def _(node, targets: List[str], function: ast.Function, is_statement: bool) -> ast.ASTNode:
    return node


def _visit_ast_nodes(nodes: list, targets: List[str], function: ast.Function, is_statement: bool) -> list:
    """Traverses the nodes and returns the new ones"""
    # the statement could be a type, and then it is not traversed (visited)
    result_nodes = list()
    for node in nodes:
        if isinstance(node, ast.ASTNode):
            # it is an ASTNode (not a type)
            new_node = visit(node, targets, function, is_statement)
            if new_node is not None:  # this visitor removes invocations, so there might be stmts removed
                result_nodes.append(new_node)
        else:  # not an ASTNode
            result_nodes.append(node)
    return result_nodes
