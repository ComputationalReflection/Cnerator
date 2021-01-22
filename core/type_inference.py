#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
Different functions to infer the type of a syntax construct.
This module heavily depends on the data provided in the ``operators_types`` module.
"""

from functools import partial

from core import probs, operators_types, probs_helper, generators, ast


def infer_return_type(program, function, operator, *args_t):
    arity = len(args_t)
    _generate_type = partial(generators.generate_type, program, function)

    if operator == "*" and arity == 1:
        assert args_t[0].__class__ == ast.Pointer
        return [args_t[0].type]

    if operator == "&" and arity == 1:
        return _generate_type(ast.Pointer, args_t[0])

    if operator == "[]":
        assert arity == 2
        assert args_t[0].__class__ == ast.Array
        assert args_t[1].__class__ in [t for t in probs.primitive_types_prob.keys() if "Int" in t.__name__]
        return [args_t[0].type]

    if operator == ".":
        assert arity == 1
        assert args_t[0].__class__ == ast.Struct
        assert isinstance(args_t[1], str)
        return [args_t[0].get_field(args_t[1])]

    if operator == "->":
        assert arity == 1
        assert args_t[0].__class__ == ast.Pointer
        assert args_t[0].type.__class__ == ast.Struct
        assert isinstance(args_t[1], str)
        return [args_t[0].type.get_type_by_field(args_t[1])]

    if operator == "?:":
        assert arity == 3
        assert args_t[0].__class__ in [t for t in probs.primitive_types_prob.keys() if "Int" in t.__name__]
        assert args_t[1].__class__ == args_t[2].__class__
        return [args_t[1]]

    if operator == "=":
        assert arity == 1
        assert not isinstance(args_t[0], ast.Array)
        return [args_t[0]]

    return list(_infer_return_type(program, function, operator, *args_t))


def _infer_return_type(program, function, operator, *args_t):
    arity = len(args_t)
    _generate_type = partial(generators.generate_type, program, function)

    # Otherwise search on the table
    try:
        selected_arity = operators_types.by_operands[arity]
    except KeyError:
        raise ValueError("Unknown arity '{}'".format(arity))
    try:
        selected_operator = selected_arity[operator]
    except KeyError:
        raise ValueError("Unknown operator '{}'".format(operator))

    last_selected_arg = selected_operator
    for pos, arg in enumerate(args_t):
        try:
            last_selected_arg = last_selected_arg[arg.__class__]
        except KeyError:
            raise ValueError("In arg '{}'. Unknown type in arg {} '{}'".format(
                arg, pos, arg.__class__.__name__))
    ret_ts_cls = last_selected_arg

    # And return one of the types
    for ret_t_cls in ret_ts_cls:
        if ret_t_cls is ast.Pointer:
            if arity == 1:
                assert args_t[0].__class__ is ast.Pointer
                yield _generate_type(ast.Pointer, args_t[0].type)
            elif arity == 2:
                if args_t[0].__class__ is ast.Pointer:
                    yield _generate_type(ast.Pointer, args_t[0].type)
                elif args_t[1].__class__ is ast.Pointer:
                    yield _generate_type(ast.Pointer, args_t[1].type)
                else:
                    raise ValueError("Unknown operation with Pointers")
        else:
            yield ret_t_cls()                                        # Direct call to constructor because are basic types


def infer_operands_type(program, function, arity, operator, ret_t):
    _generate_type = partial(generators.generate_type, program, function)

    if operator == "*" and arity == 1:
        return [_generate_type(ast.Pointer, ret_t)]

    if operator == "&" and arity == 1:
        assert ret_t.__class__ == ast.Pointer
        # Pointer(T) <- & T
        return [ret_t.type]

    if operator == "[]":
        assert arity == 2
        array_obj = _generate_type(ast.Array, ret_t)
        return [(array_obj, t()) for t in probs.primitive_types_prob.keys() if "Int" in t.__name__]

    if operator == ".":
        assert arity == 1
        return [_generate_type(ast.Struct, ret_t)]

    if operator == "->":
        assert arity == 1
        struct_t = _generate_type(ast.Struct, ret_t)
        return [_generate_type(ast.Pointer, struct_t)]

    if operator == "?:":
        assert arity == 3
        return [(ast.SignedInt(), ret_t, ret_t)]

    if operator == "=":
        assert arity == 1
        assert not isinstance(ret_t, ast.Array)
        return [ret_t]

    return _infer_operands_type(program, function, arity, operator, ret_t)


def _infer_operands_type(program, function, arity, operator, ret_t):
    _generate_type = partial(generators.generate_type, program, function)

    # Otherwise search on the table
    try:
        selected_arity = operators_types.by_return[arity]
    except KeyError:
        raise ValueError("Unknown arity '{}'".format(arity))
    try:
        selected_operator = selected_arity[operator]
    except KeyError:
        raise ValueError("Unknown operator '{}'".format(operator))
    try:
        args_t = selected_operator[ret_t.__class__]
    except KeyError:
        raise ValueError("There's no {} that use the operator '{}' and return '{}'".format(
            "type" if arity == 1 else "types", operator, ret_t.__class__.__name__))

    # And return one of the types
    if ret_t.__class__ in [ast.Pointer, ast.Array]:
        type_obj = ret_t.type
    else:
        type_cls = probs_helper.random_value(probs.primitive_types_prob)
        type_obj = type_cls()
    if arity == 1:
        return [_generate_type(arg_t, type_obj) for arg_t in args_t]
    if arity == 2:
        return [(_generate_type(arg1_t, type_obj), _generate_type(arg2_t, type_obj)) for arg1_t, arg2_t in args_t]
    raise AssertionError("Unknown arity")
