# -*- coding: utf-8 -*-

from singledispatch import singledispatch

from cnerator import ast, generators, probs


@singledispatch
def visit(node, targets, **kwargs):
    raise TypeError("Unknown node type: " + node.__class__.__name__)


@visit.register(ast.Program)
def _(program, targets, **kwargs):
    kwargs["parent"] = program
    kwargs["program"] = program

    # XXX: Pointers, Struct and Arrays only generate literals in declarations. The normal solution is to
    # generate a lvalue instead, this solution can cause the creation of new functions. The solution to this new problem
    #  is to eliminate the probability of invocation before generate a new literal.
    new_probs = {False:1, True:0}
    old_probs = dict(probs.call_prob)
    probs.call_prob = new_probs

    for f in program.functions:
        visit(f, targets, **kwargs)
    visit(program.main, targets, **kwargs)

    # Restore the old probability
    probs.call_prob = dict(old_probs)


@visit.register(ast.Function)
def _(function, targets, **kwargs):
    kwargs["parent"] = function
    kwargs["function"] = function
    function.children = [ns for ns in (visit(s, targets, **kwargs) for s in function.stmts) if ns is not None]


@visit.register(ast.Invocation)
def _(invocation, targets, **kwargs):
    if invocation.func_name in targets:
        # If invocation is a statement
        if isinstance(kwargs["parent"], ast.Function):
            print("{}: Remove call {}".format(kwargs["function"].name, invocation.func_name))
            return None
        # If invocation is an expression
        else:
            literal = generators.generate_literal(
                kwargs["program"], kwargs["function"], invocation.return_type, from_declaration=False)
            print("{} Subs call {} -> ({}) {}".format(
                kwargs["function"].name, invocation.func_name, invocation.return_type.name, literal))
            return literal
    else:
        kwargs["parent"] = invocation
        invocation.arguments = [visit(a, targets, **kwargs) if isinstance(a, ast.ASTNode) else a
                                for a in invocation.arguments]
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
    node.children = [visit(ch, targets, **kwargs) if isinstance(ch, ast.ASTNode) else ch for ch in node.children]
    return node


@visit.register(ast.Literal)
@visit.register(ast.Variable)
def _(node, targets, **kwargs):
    return node