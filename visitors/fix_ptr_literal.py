# -*- coding: utf-8 -*-

from singledispatch import singledispatch

from cnerator import ast, generators
from cnerator.utils import print_if_verbose


@singledispatch
def visit(node, program=None, function=None, **kwargs):
    raise TypeError("Unknown node type: " + node.__class__.__name__)


@visit.register(ast.Program)
def _(program, **kwargs):
    print_if_verbose()
    print_if_verbose("*" * 80)
    print_if_verbose("* FIX PTR LITERALS")
    print_if_verbose("*" * 80)

    for f in program.functions:
        visit(f, program, **kwargs)
    visit(program.main, program, **kwargs)
    return program


@visit.register(ast.Function)
def _(function, program, **kwargs):
    function.children = [ns for ns in (visit(s, program, function, **kwargs) for s in function.stmts) if ns is not None]
    return function


@visit.register(ast.Invocation)
def _(invocation, program, function, **kwargs):
    invocation.arguments = [visit(a, program, function, **kwargs) if isinstance(a, ast.ASTNode) else a
                            for a in invocation.arguments]
    return invocation


@visit.register(ast.Label)
def _(label, program, function, **kwargs):
    return label


@visit.register(ast.Assignment)
@visit.register(ast.BinaryExpression)
@visit.register(ast.ArrayAccessExpression)
@visit.register(ast.UnaryExpression)
@visit.register(ast.Return)
@visit.register(ast.StructAccessExpression)
@visit.register(ast.TernaryExpression)
def _(node, program, function, **kwargs):
    node.children = [visit(ch, program, function, **kwargs) if isinstance(ch, ast.ASTNode) else ch for ch in node.children]
    return node


@visit.register(ast.CastExpression)
def _(cast, program, function, **kwargs):
    if isinstance(cast.type, ast.Pointer) and isinstance(cast.exp, ast.Literal):
        print_if_verbose("*" * 80)
        print_if_verbose(function.name)
        print_if_verbose(repr(cast.type), "<-", repr(cast.exp.type))
        try:
            global_var = program.global_vars[cast.exp.type]
        except KeyError:
            print_if_verbose("NEW")
            global_var = generators.generate_global_var(program, function, cast.exp.type)
        cast.exp = ast.UnaryExpression("/* PTR LITERAL */ & ", global_var, cast.exp.type, post_op=False)
        print_if_verbose(cast)
        print_if_verbose("*" * 80)
    else:
        cast.children = [visit(cast.exp, program, function, **kwargs)]
    return cast


@visit.register(ast.Literal)
def _(literal, program, function, **kwargs):
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


@visit.register(ast.Variable)
def _(var, program, function, **kwargs):
    return var
