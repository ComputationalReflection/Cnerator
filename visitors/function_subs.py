# -*- coding: utf-8 -*-

"""Visitor to replace the invocations to functions that have been removed"""

from singledispatch import singledispatch
from cnerator import ast, generators, probs
from params.parameters import get_app_args


@singledispatch
def visit(node, targets, **kwargs):
    raise TypeError("Unknown node type: " + node.__class__.__name__)


@visit.register(ast.Program)
def _(program: ast.Program, targets, **kwargs) -> ast.Program:
    kwargs["parent"] = program
    kwargs["program"] = program

    # Pointers, Struct and Arrays only generate literals in declarations. The normal solution is to
    # generate a lvalue instead, this solution can cause the creation of new functions. The solution to this new problem
    # is to eliminate the probability of invocation before generate a new literal.
    new_probs = {False: 1, True: 0}
    old_probs = dict(probs.call_prob)
    probs.call_prob = new_probs

    for function in program.functions:
        visit(function, targets, **kwargs)
    visit(program.main, targets, **kwargs)

    # Restore the old probability
    probs.call_prob = dict(old_probs)
    return program


@visit.register(ast.Function)
def _(function: ast.Function, targets, **kwargs) -> ast.Function:
    kwargs["parent"] = function
    kwargs["function"] = function
    function.children = [ns for ns in (visit(s, targets, **kwargs) for s in function.stmts) if ns is not None]
    return function


@visit.register(ast.Invocation)
def _(invocation: ast.Invocation, targets, **kwargs) -> ast.ASTNode:
    if invocation.func_name in targets:
        # If invocation is a statement
        if type(kwargs["parent"]) in [ast.Function, ast.Block, ast.Do, ast.For, ast.While, ast.If, ast.Switch]:
            if get_app_args().verbose:
                print("{}: Remove call {}".format(kwargs["function"].name, invocation.func_name))
            return None  # TODO Aquí está el error; funciona si sustituyo None por ast.Label("kkk")
        # If invocation is an expression
        else:
            literal = generators.generate_literal(
                kwargs["program"], kwargs["function"], invocation.return_type, from_declaration=False)
            if get_app_args().verbose:
                print("{} Subs call {} -> ({}) {}".format(
                    kwargs["function"].name, invocation.func_name, invocation.return_type.name, literal.to_str()))
            return literal
    else:
        kwargs["parent"] = invocation
        invocation.arguments = _visit_ast_nodes(invocation.arguments, targets, **kwargs)
        return invocation


@visit.register(ast.Assignment)
@visit.register(ast.BinaryExpression)
@visit.register(ast.ArrayAccessExpression)
@visit.register(ast.UnaryExpression)
@visit.register(ast.Return)
@visit.register(ast.StructAccessExpression)
@visit.register(ast.TernaryExpression)
def _(node, targets, **kwargs):
    kwargs["parent"] = node
    node.children = _visit_ast_nodes(node.children, targets, **kwargs)
    return node


@visit.register(ast.Block)
def _(node: ast.Block, targets, **kwargs) -> ast.Block:
    kwargs["parent"] = node
    node.statements = _visit_ast_nodes(node.statements, targets, **kwargs)
    return node


@visit.register(ast.Do)
@visit.register(ast.While)
def _(node, targets, **kwargs) -> ast.ASTNode:
    kwargs["parent"] = node
    node.condition = visit(node.condition, targets, **kwargs)
    node.statements = _visit_ast_nodes(node.statements, targets, **kwargs)
    return node


@visit.register(ast.If)
def _(node: ast.If, targets, **kwargs) -> ast.If:
    kwargs["parent"] = node
    node.condition = visit(node.condition, targets, **kwargs)
    node.if_statements = _visit_ast_nodes(node.if_statements, targets, **kwargs)
    node.else_statements = _visit_ast_nodes(node.else_statements, targets, **kwargs)
    return node


@visit.register(ast.For)
def _(node: ast.For, targets, **kwargs) -> ast.For:
    kwargs["parent"] = node
    node.initialization = visit(node.initialization, targets, **kwargs)
    node.condition = visit(node.condition, targets, **kwargs)
    node.increment = visit(node.increment, targets, **kwargs)
    node.statements = _visit_ast_nodes(node.statements, targets, **kwargs)
    return node


@visit.register(ast.Switch)
def _(node: ast.Switch, targets, **kwargs) -> ast.Switch:
    kwargs["parent"] = node
    node.condition = visit(node.condition, targets, **kwargs)
    for case_literal, case_statements in node.cases.items():
        node.cases[case_literal] = _visit_ast_nodes(case_statements, targets, **kwargs)
    node.default = _visit_ast_nodes(node.default, targets, **kwargs)
    return node


@visit.register(ast.Literal)
@visit.register(ast.Variable)
@visit.register(ast.Break)
@visit.register(ast.Label)
def _(node, targets, **kwargs):
    return node


def _visit_ast_nodes(nodes: list, targets, **kwargs) -> list:
    """Traverses the nodes and returns the new ones"""
    # the statement could be a type, and then it is not traversed (visited)
    result_nodes = list()
    for node in nodes:
        if isinstance(node, ast.ASTNode):
            # it is an ASTNode (not a type)
            new_node = visit(node, targets, **kwargs)
            if new_node is not None:  # this visitor removes invocations, so there might be stmts removed
                result_nodes.append(new_node)
        else:  # not an ASTNode
            result_nodes.append(node)
    return result_nodes
