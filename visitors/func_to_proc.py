#!/usr/bin/env python
# -*- coding: utf-8 -*-


from singledispatch import singledispatch

import cnerator
from cnerator.utils import print_if_verbose


@singledispatch
def visit(node):
    raise TypeError("Unknown node type: " + node.__class__.__name__)


@visit.register(cnerator.ast.Program)
def _(program):
    print_if_verbose("")
    print_if_verbose("*" * 80)
    print_if_verbose("* FUNC TO PROC INSTRUMENTATION")
    print_if_verbose("*" * 80)
    for f in program.functions:
        visit(f)
    visit(program.main)


@visit.register(cnerator.ast.Function)
def _(function):
    # Rename procedures
    if function.return_type == cnerator.ast.Void():
        print_if_verbose("Replacing func with proc: " + function.name)
        function.name = function.name.replace("func", "proc")


@visit.register(cnerator.ast.Invocation)
def _(invocation):
    # Rename procedures
    if invocation.return_type == cnerator.ast.Void():
        invocation.func_name = invocation.func_name.replace("func", "proc")
        print_if_verbose("Replacing: " + invocation.func_name)


@visit.register(cnerator.ast.Assignment)
@visit.register(cnerator.ast.UnaryExpression)
@visit.register(cnerator.ast.Return)
def _(statement):
    pass


