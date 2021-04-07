#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
This visitor replaces all the pointer literals with a valid memory address.
At code generation, pointers literals are just a 0 memory address. Here, they are replaced with memory
addresses of global variables.
"""

from functools import singledispatch

from core import ast, generators
from core.utils import print_if_verbose


@singledispatch
def visit(node, program=None, function=None, **kwargs):
    raise TypeError("Unknown node type: " + node.__class__.__name__)


@visit.register(ast.Program)
def _(program: ast.Program, **kwargs) -> ast.Program:
    print_if_verbose()
    print_if_verbose("*" * 80)
    print_if_verbose("* FIX PTR LITERALS")
    print_if_verbose("*" * 80)

    for function in program.functions:
        visit(function, program, **kwargs)
    visit(program.main, program, **kwargs)
    return program


@visit.register(ast.Function)
def _(function: ast.Function, program: ast.Program, **kwargs) -> ast.Function:
    function.children = [ns for ns in (visit(s, program, function, **kwargs) for s in function.stmts) if ns is not None]
    return function


@visit.register(ast.Invocation)
def _(invocation: ast.Invocation, program: ast.Program, function: ast.Function, **kwargs) -> ast.Invocation:
    invocation.arguments = [visit(a, program, function, **kwargs) if isinstance(a, ast.ASTNode) else a
                            for a in invocation.arguments]
    return invocation


@visit.register(ast.Assignment)
@visit.register(ast.BinaryExpression)
@visit.register(ast.ArrayAccessExpression)
@visit.register(ast.UnaryExpression)
@visit.register(ast.Return)
@visit.register(ast.StructAccessExpression)
@visit.register(ast.TernaryExpression)
@visit.register(ast.CastExpression)
def _(node, program: ast.Program, function: ast.Function, **kwargs) -> ast.ASTNode:
    node.children = [visit(ch, program, function, **kwargs) if isinstance(ch, ast.ASTNode) else ch for ch in node.children]
    return node


@visit.register(ast.Literal)
def _(literal: ast.Literal, program: ast.Program, function: ast.Function, **kwargs) -> ast.ASTNode:
    if isinstance(literal.type, ast.Pointer):
        print_if_verbose("*" * 80)
        print_if_verbose(function.name)
        print_if_verbose(repr(literal.type))
        try:
            global_var = program.global_vars[literal.type.type]
        except KeyError:
            print_if_verbose("NEW")
            global_var = generators.generate_global_var(program, function, literal.type.type)
        new_literal = ast.UnaryExpression("/* PTR LITERAL */ & ", global_var, literal.type.type, post_op=False)
        print_if_verbose(new_literal)
        print_if_verbose("*" * 80)
        return new_literal
    return literal


@visit.register(ast.Block)
def _(node: ast.Block, program: ast.Program, function: ast.Function, **kwargs):
    node.statements = [visit(stmt, program, function, **kwargs) for stmt in node.statements]
    return node


@visit.register(ast.Do)
@visit.register(ast.While)
def _(node, program: ast.Program, function: ast.Function, **kwargs):
    node.condition = visit(node.condition, program, function, **kwargs)
    node.statements = [visit(stmt, program, function, **kwargs) if isinstance(stmt, ast.ASTNode) else stmt
                     for stmt in node.statements]
    return node


@visit.register(ast.If)
def _(node: ast.If, program: ast.Program, function: ast.Function, **kwargs):
    node.condition = visit(node.condition, program, function, **kwargs)
    node.if_statements = [visit(stmt, program, function, **kwargs) for stmt in node.if_statements]
    node.else_statements = [visit(stmt, program, function, **kwargs) for stmt in node.else_statements]
    return node


@visit.register(ast.For)
def _(node: ast.For, program: ast.Program, function: ast.Function, **kwargs):
    node.initialization = visit(node.initialization, program, function, **kwargs)
    node.condition = visit(node.condition, program, function, **kwargs)
    node.increment = visit(node.increment, program, function, **kwargs)
    node.statements = [visit(stmt, program, function, **kwargs) for stmt in node.statements]
    return node


@visit.register(ast.Switch)
def _(node: ast.Switch, program: ast.Program, function: ast.Function, **kwargs):
    node.condition = visit(node.condition, program, function, **kwargs)
    for case_literal, case_statements in node.cases.items():
        node.cases[case_literal] = [visit(stmt, program, function, **kwargs) for stmt in case_statements]
    node.default = [visit(stmt, program, function, **kwargs) for stmt in node.default]
    return node


@visit.register(ast.Variable)
@visit.register(ast.Label)
@visit.register(ast.Break)
def _(node, program: ast.Program, function: ast.Function, **kwargs) -> ast.ASTNode:
    return node

