#!/usr/bin/env python
# -*- coding: utf-8 -*-


from singledispatch import singledispatch

import cnerator
from cnerator.utils import print_if_verbose

return_label_counter = 0


def generate_label() -> str:
    global return_label_counter
    return_label_counter += 1
    return f"__RETURN{return_label_counter}__"



@singledispatch
def visit(node):
    raise TypeError("Unknown node type: " + node.__class__.__name__)


@visit.register(cnerator.ast.Program)
def _(program):
    print_if_verbose("")
    print_if_verbose("*" * 80)
    print_if_verbose("* RETURN INSTRUMENTATION")
    print_if_verbose("*" * 80)
    for f in program.functions:
        visit(f)
    visit(program.main)


@visit.register(cnerator.ast.Function)
def _(function):
    # Include RETURN label before return statements
    instrumented_stmts = []
    for stmt in function.stmts:
        if isinstance(stmt, cnerator.ast.Return):
            print_if_verbose(f"Return stmt: {stmt}")
            label_ast = cnerator.ast.Label(generate_label())
            instrumented_stmts.append(label_ast)
        visit(stmt)
        instrumented_stmts.append(stmt)
    function.stmts = instrumented_stmts

    # If is a procedure add at the end a return statement
    if function.return_type == cnerator.ast.Void():
        function.stmts.append(cnerator.ast.Label(generate_label()))
        function.stmts.append(cnerator.ast.Return())


@visit.register(cnerator.ast.Assignment)
@visit.register(cnerator.ast.UnaryExpression)
@visit.register(cnerator.ast.Return)
@visit.register(cnerator.ast.Invocation)
def _(statement):
    pass


