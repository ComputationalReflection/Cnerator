#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
A visitor implementation that stores a representation of the calling graph into a text stream.
Its use is for debugging purposes, to check the structure of the generated program.
"""

from __future__ import print_function
from __future__ import unicode_literals

import io

from functools import singledispatch

from core import ast

global_visit_main = True

def write_graph(program, visit_main, path):
    with io.open(path, mode="w", encoding="utf-8") as buffer:
        buffer.write("digraph G {\n")
        buffer.write('graph [rankdir = "LR", orientation = "landscape", ranksep = 3.0, nodesep= 2.0];\n')
        buffer.write('node [fontsize = "8", style = "filled", color = "blue"];\n')
        buffer.write('edge [fontsize = "8", weight = 0.1];\n')
        # buffer.write('main [style = "filled", color = "red"];\n')
        edges = []
        nodes = []

        global global_visit_main
        global_visit_main = visit_main

        callinsp_visit(program, nodes, edges)
        for e in edges:
            buffer.write(e + "\n")
        for n in nodes:
            buffer.write(n + "\n")
        buffer.write("}\n")


@singledispatch
def callinsp_visit(node, nodes, edges, *args, **kwargs):
    raise TypeError("Unknown node type: " + node.__class__.__name__)


@callinsp_visit.register(ast.Program)
def _(program, nodes, edges):
    for f in program.functions:
        callinsp_visit(f, nodes, edges)
    if global_visit_main:
        callinsp_visit(program.main, nodes, edges)


@callinsp_visit.register(ast.Function)
def _(function, nodes, edges):
    if function.name == "main":
        color = "tomato"
    elif function.name.startswith("func"):
        color = "steelblue1"
    elif function.name.startswith("proc"):
        color = "greenyellow"
    else:
        raise AssertionError("Unknown type of function")

    nodes.append('{} [color = "{}"];'.format(function.name, color))
    for s in function.stmts:
        callinsp_visit(s, nodes, edges, function.name, function)


@callinsp_visit.register(ast.Invocation)
def _(invocation, nodes, edges, func_name, parent):
    comment = " "
    if isinstance(parent, ast.Function):
        comment = " /* stmt invocation */"
    else:
        comment = " /* expr invocation */"
    edges.append("{} -> {}{}".format(func_name, invocation.func_name, comment))

    if invocation.arguments:
        for arg in invocation.arguments:
            if isinstance(arg, ast.ASTNode):
                callinsp_visit(arg, nodes, edges, func_name, invocation)


@callinsp_visit.register(ast.BinaryExpression)
@callinsp_visit.register(ast.Assignment)
@callinsp_visit.register(ast.ArrayAccessExpression)
@callinsp_visit.register(ast.Return)
@callinsp_visit.register(ast.UnaryExpression)
@callinsp_visit.register(ast.StructAccessExpression)
@callinsp_visit.register(ast.TernaryExpression)
def _(node, nodes, edges, func_name, parent):
    for exp in node.children:
        if isinstance(exp, ast.ASTNode):
            callinsp_visit(exp, nodes, edges, func_name, node)

@callinsp_visit.register(ast.Literal)
@callinsp_visit.register(ast.Variable)
@callinsp_visit.register(ast.Label)
def _(node, nodes, edges, func_name, parent):
    pass
