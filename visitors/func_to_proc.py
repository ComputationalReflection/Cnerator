#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""Example visitor that replaces the name of functions returning void.
Its name prefix is changed from ``func`` to ``proc``.
All the invocations are also renamed."""


from functools import singledispatch
import core
from core.utils import print_if_verbose
from core import ast

@singledispatch
def visit(node):
    raise TypeError("Unknown node type: " + node.__class__.__name__)


@visit.register(ast.Program)
def _(program: ast.Program) -> None:
    print_if_verbose("")
    print_if_verbose("*" * 80)
    print_if_verbose("* FUNC TO PROC INSTRUMENTATION")
    print_if_verbose("*" * 80)
    for function in program.functions:
        visit(function)
    visit(program.main)


@visit.register(ast.Function)
def _(function: ast.Function) -> None:
    # Rename procedures
    if function.return_type == core.ast.Void():
        print_if_verbose("Replacing func with proc: " + function.name)
        function.name = function.name.replace("func", "proc")
    for stmt in function.stmts:
        visit(stmt)


@visit.register(ast.Invocation)
def _(invocation: ast.Invocation) -> None:
    # Rename procedures
    if invocation.return_type == core.ast.Void():
        invocation.func_name = invocation.func_name.replace("func", "proc")
        print_if_verbose("Replacing: " + invocation.func_name)


@visit.register(ast.Block)
def _(node: ast.Block) -> None:
    _visit_ast_nodes(node.statements)


@visit.register(ast.Do)
@visit.register(ast.While)
def _(node) -> None:
    visit(node.condition)
    _visit_ast_nodes(node.statements)


@visit.register(ast.If)
def _(node: ast.If) -> None:
    visit(node.condition)
    _visit_ast_nodes(node.if_statements)
    _visit_ast_nodes(node.else_statements)


@visit.register(ast.For)
def _(node: ast.For) -> None:
    visit(node.initialization)
    visit(node.condition)
    visit(node.increment)
    _visit_ast_nodes(node.statements)


@visit.register(ast.Switch)
def _(node: ast.Switch) -> None:
    visit(node.condition)
    for case_literal, case_statements in node.cases.items():
        _visit_ast_nodes(case_statements)
    _visit_ast_nodes(node.default)


@visit.register(ast.Assignment)
@visit.register(ast.BinaryASTNode)
@visit.register(ast.UnaryASTNode)
@visit.register(ast.TernaryASTNode)
@visit.register(ast.Return)
@visit.register(ast.Literal)
@visit.register(ast.Variable)
@visit.register(ast.Break)
def _(_: ast.ASTNode) -> None:
    pass


def _visit_ast_nodes(nodes: list) -> None:
    """Traverses the nodes and returns the new ones"""
    # the statement could be a type, and then it is not traversed (visited)
    for node in nodes:
        if isinstance(node, ast.ASTNode):
            visit(node)
