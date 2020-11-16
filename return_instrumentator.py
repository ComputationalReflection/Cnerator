#!/usr/bin/env python
# -*- coding: utf-8 -*-


from singledispatch import singledispatch
import cnerator
import sys


# First of all change Return.__str__
return_label_counter = 0
def return_str_replacement(self):
    global return_label_counter
    return_label_counter += 1
    if self.exp is not None:
        return "__RETURN%d__: return %s" % (return_label_counter, self.exp)
    return "__RETURN%d__: return" % (return_label_counter)


def monkey_path():
    cnerator.ast.Return.__str__ = return_str_replacement


@singledispatch
def visit(node):
    raise TypeError("Unknown node type: " + node.__class__.__name__)


@visit.register(cnerator.ast.Program)
def _(program):
    for f in program.functions:
        visit(f)
    visit(program.main)


@visit.register(cnerator.ast.Function)
def _(function):
    # Rename procedures
    if function.return_type == cnerator.ast.Void():
        function.name = function.name.replace("func", "proc")
        print("REPLACE: " + function.name)

    for s in function.stmts:
        visit(s)

    # If is a procedure add at the end a return statement
    if function.return_type == cnerator.ast.Void():
        function.stmts.append(cnerator.ast.Return())


@visit.register(cnerator.ast.Invocation)
def _(invocation):
    # Rename procedures
    if invocation.return_type == cnerator.ast.Void():
        invocation.func_name = invocation.func_name.replace("func", "proc")
        print("REPLACE: " + invocation.func_name)


@visit.register(cnerator.ast.Assignment)
@visit.register(cnerator.ast.UnaryExpression)
@visit.register(cnerator.ast.Return)
def _(statement):
    pass


