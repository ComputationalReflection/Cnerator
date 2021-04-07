#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""Example visitor that adds a return label before every expression in a return statement.
The purpose is to identify the binary code used to return from a function.
If the function returns ``void``, a label and an explicit return function is added at the end of the function."""


from functools import singledispatch
from core.utils import print_if_verbose
from typing import List
from core import ast

_return_label_counter = 0


def generate_label() -> str:
    """Generates a new unique label string"""
    global _return_label_counter
    _return_label_counter += 1
    return f"__RETURN{_return_label_counter}__"


@singledispatch
def visit(node):
    raise TypeError("Unknown node type: " + node.__class__.__name__)


@visit.register(ast.Program)
def _(program: ast.Program):
    print_if_verbose("")
    print_if_verbose("*" * 80)
    print_if_verbose("* RETURN INSTRUMENTATION")
    print_if_verbose("*" * 80)
    for function in program.functions:
        visit(function)
    visit(program.main)


def _instrument_statements(statements: List[ast.ASTNode]) -> List[ast.ASTNode]:
    """Includes a label before the return statements"""
    instrumented_stmts = []
    for stmt in statements:
        if isinstance(stmt, ast.Return):
            print_if_verbose(f"Return stmt: {stmt.to_str()}")
            label_ast = ast.Label(generate_label())
            instrumented_stmts.append(label_ast)
        visit(stmt)
        instrumented_stmts.append(stmt)
    return instrumented_stmts


@visit.register(ast.Function)
def _(function: ast.Function):
    """Traverses a function definition to add a RETURN label before each return statement"""
    function.stmts = _instrument_statements(function.stmts)
    # If is a procedure add at the end a return statement
    if isinstance(function.return_type, ast.Void):
        function.stmts.append(ast.Label(generate_label()))
        function.stmts.append(ast.Return())


@visit.register(ast.Block)
@visit.register(ast.Do)
@visit.register(ast.While)
@visit.register(ast.For)
def _(node):
    """Traverses a control flow statement to add a RETURN label before each return statement"""
    node.statements = _instrument_statements(node.statements)


@visit.register(ast.If)
def _(node: ast.If):
    # include RETURN label before return statements in if and else bodies
    node.if_statements = _instrument_statements(node.if_statements)
    node.else_statements = _instrument_statements(node.else_statements)


@visit.register(ast.Switch)
def _(node: ast.Switch):
    #  include RETURN label before return statements in case and default blocks
    for case_literal, case_statements in node.cases.items():
        node.cases[case_literal] = _instrument_statements(node.cases[case_literal])
    node.default = _instrument_statements(node.default)


@visit.register(ast.Assignment)
@visit.register(ast.UnaryExpression)
@visit.register(ast.Return)
@visit.register(ast.Invocation)
@visit.register(ast.Variable)
@visit.register(ast.Literal)
@visit.register(ast.TernaryASTNode)
@visit.register(ast.BinaryASTNode)
@visit.register(ast.UnaryASTNode)
@visit.register(ast.Break)
@visit.register(ast.Label)
def _(statement):
    pass


