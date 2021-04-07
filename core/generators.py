#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
Module aimed at generating the different elements of the output C program.
Each syntax construct is encapsulated into a ``generate_`` <syntax construct> function.
First ``generate_program`` is called, which in turn calls other generators until the whole program is generated.
The probabilities of all the syntactic constructs are considered.
Program representation is return by each generator, represented as AST nodes.
"""

from __future__ import print_function

from typing import Union

from core import probs, probs_helper, ast, type_inference, utils
from visitors import function_subs
from core.utils import print_if_verbose
from core.ast import *


################ Expressions ####################

def generate_basic_exp(program, function, c_type):
    basic_expression_name = probs_helper.random_value(probs.basic_expression_prob)
    generator_name = "generate_" + basic_expression_name
    generator = globals()[generator_name]
    return generator(program, function, c_type)


def generate_global_var(program, function, c_type):
    if c_type.name not in program.global_vars.keys():
        # Creates the global vars empty list for that type
        program.global_vars[c_type.name] = []
    create_new_global_var = probs_helper.random_value(probs.new_global_var_prob)
    number_of_vars = len(program.global_vars[c_type.name])
    if not create_new_global_var and number_of_vars > 0:
        selected = probs_helper.random_value(probs_helper.compute_equal_prob(range(number_of_vars)))
        # An existing global variable is taken
        return ast.global_variable(c_type, selected + 1)
    # A new global variable must be created
    literal = generate_literal(program, function, c_type, from_declaration=True)
    program.global_vars[c_type.name].append((c_type, literal))
    return ast.global_variable(c_type, len(program.global_vars[c_type.name]))


def generate_local_var(program, function, c_type):
    if c_type.name not in function.local_vars.keys():
        # Creates the local vars empty list for that type
        function.local_vars[c_type.name] = []
    create_new_local_var = probs_helper.random_value(probs.new_local_var_prob)
    number_of_vars = len(function.local_vars[c_type.name])
    if not create_new_local_var and number_of_vars > 0:
        selected = probs_helper.random_value(probs_helper.compute_equal_prob(range(number_of_vars)))
        # An existing local variable is taken
        return ast.local_variable(c_type, selected + 1)
    # A new local variable must be created
    literal = generate_literal(program, function, c_type, from_declaration=True)
    function.local_vars[c_type.name].append((c_type, literal))
    return ast.local_variable(c_type, len(function.local_vars[c_type.name]))


def generate_param_var(program, function, c_type):
    param_var = function.get_param_by_type(c_type)
    if param_var is None:
        return generate_local_var(program, function, c_type)
    return param_var


def generate_lvalue(program, function, exp_type, exp_depth_prob):
    exp_depth = probs_helper.random_value(exp_depth_prob or probs.exp_depth_prob)

    if exp_depth == 0:
        return generate_basic_lvalue(program, function, exp_type)

    lower_exp_depth_prob = probs_helper.compute_equal_prob(range(0, exp_depth))

    operators = ast.get_operators(exp_type, "lvalue")
    if len(operators) == 0:
        return generate_basic_lvalue(program, function, exp_type)

    operator, _ = probs_helper.random_value(operators)
    if operator == "[]":
        return generate_expression_arity_2(program, function, exp_type, operator,
                                           default_generator_1=generate_lvalue, generator_1_depth_prob=lower_exp_depth_prob,
                                           default_generator_2=generate_expression, generator_2_depth_prob=None)
    return generate_expression_arity_1(program, function, exp_type, operator,
                                       default_generator_1=generate_lvalue, generator_1_depth_prob=lower_exp_depth_prob)


def generate_basic_lvalue(program, function, c_type):
    is_global_generator = probs_helper.random_value(probs.global_or_local_as_basic_lvalue_prob)
    generator = generate_global_var if is_global_generator else generate_local_var
    return generator(program, function, c_type)


def generate_literal(program, function, literal_type, from_declaration=False):
    try:
        # If Array or Struct, only generate a literal occasionally
        if from_declaration and isinstance(literal_type, (ast.Array, ast.Struct)):
            selected_prob = "{}_literal_initialization_prob".format(
                utils.camel_case_to_snake_case(literal_type.__class__.__name__),
            )
            prob = globals()["probs"].__dict__[selected_prob]
            rand = probs_helper.random_value(prob)
            if not rand:
                return None
        return literal_type.generate_literal(from_declaration=from_declaration)
    except ValueError:
        # NOTE: Pointers, Struct and Arrays only generate literals in declarations, so if a literal is necessary,
        # generate a lvalue instead
        return generate_lvalue(program, function, literal_type, None)


def generate_expression(program, function, exp_type, exp_depth_prob):

    # Check implicit promotion
    if probs_helper.random_value(probs.implicit_promotion_bool):
        try:
            new_type_cls = probs_helper.random_value(probs.promotions_prob[exp_type.__class__])
            exp_type = new_type_cls()
        except KeyError:
            pass

    exp_depth = probs_helper.random_value(exp_depth_prob or probs.exp_depth_prob)

    if exp_depth == 0:
        return generate_basic_exp(program, function, exp_type)

    lower_exp_depth_prob = probs_helper.compute_equal_prob(range(0, exp_depth))

    isCall = probs_helper.random_value(probs.call_prob)

    if not isCall:
        operators = ast.get_operators(exp_type, "normal")
        if len(operators) == 0:
            return generate_basic_exp(program, function, exp_type)

        operator, arity = probs_helper.random_value(operators)
        func_name = "generate_expression_arity_{}".format(arity)
        kwargs = {
            "default_generator_1": generate_expression, "generator_1_depth_prob": lower_exp_depth_prob,
            "default_generator_2": generate_expression, "generator_2_depth_prob": lower_exp_depth_prob,
            "default_generator_3": generate_expression, "generator_3_depth_prob": lower_exp_depth_prob,
        }
        return globals()[func_name](program, function, exp_type, operator, **kwargs)

    else:
        return generate_expression_invocation(program, function, exp_type, lower_exp_depth_prob)


def generate_expression_arity_1(program, function, exp_type, operator,
                                default_generator_1, generator_1_depth_prob,
                                **kwargs):
    # Infer types and select one
    sub_exp_1_types = type_inference.infer_operands_type(program, function, 1, operator, exp_type)
    sub_exp_1_type = probs_helper.random_value(probs_helper.compute_equal_prob(sub_exp_1_types))

    if operator in ["++", "--"]:
        return generate_expression_incdec(program, function, sub_exp_1_type, operator)

    if operator == "&":
        sub_exp_1 = generate_lvalue(program, function, sub_exp_1_type, None)
        return ast.UnaryExpression(operator, sub_exp_1, exp_type, post_op=False)

    if operator in [".", "->"]:
        sub_exp_1 = default_generator_1(program, function, sub_exp_1_type, exp_depth_prob=generator_1_depth_prob)
        if operator == ".":
            # Type -> Struct
            field = sub_exp_1_type.get_field_by_type(exp_type)
            return ast.StructAccessExpression(operator, sub_exp_1, field, exp_type)

        if operator == "->":
            # Type -> Pointer(Struct)
            field = sub_exp_1_type.type.get_field_by_type(exp_type)
            return ast.StructAccessExpression(operator, sub_exp_1, field, exp_type)

        raise AssertionError("Unknown operator")

    if operator == '()':
        sub_exp_1 = default_generator_1(program, function, sub_exp_1_type, exp_depth_prob=generator_1_depth_prob)
        return ast.CastExpression(sub_exp_1, exp_type)

    # Otherwise
    sub_exp_1 = default_generator_1(program, function, sub_exp_1_type, generator_1_depth_prob)
    return ast.UnaryExpression(operator, sub_exp_1, exp_type, post_op=False)


def generate_expression_arity_2(program, function, exp_type, operator,
                                default_generator_1, generator_1_depth_prob,
                                default_generator_2, generator_2_depth_prob,
                                **kwargs):
    # Infer types and select one pair
    types_pairs = type_inference.infer_operands_type(program, function, 2, operator, exp_type)
    sub_exp_1_type, sub_exp_2_type = probs_helper.random_value(probs_helper.compute_equal_prob(types_pairs))

    # Generate the expressions
    sub_exp_1 = default_generator_1(program, function, sub_exp_1_type, exp_depth_prob=generator_1_depth_prob)
    sub_exp_2 = default_generator_2(program, function, sub_exp_2_type, exp_depth_prob=generator_2_depth_prob)
    if operator == "[]":
        return ast.ArrayAccessExpression(sub_exp_1, sub_exp_2, exp_type)
    return ast.BinaryExpression(sub_exp_1, operator, sub_exp_2, exp_type)


def generate_expression_arity_3(program, function, exp_type, operator,
                                default_generator_1, generator_1_depth_prob,
                                default_generator_2, generator_2_depth_prob,
                                default_generator_3, generator_3_depth_prob,
                                **kwargs):
    # Infer types and select one pair
    types_pairs = type_inference.infer_operands_type(program, function, 3, operator, exp_type)
    sub_exp_1_type, sub_exp_2_type, sub_exp_2_type = probs_helper.random_value(
        probs_helper.compute_equal_prob(types_pairs))

    sub_exp_1 = default_generator_1(program, function, sub_exp_1_type, exp_depth_prob=generator_1_depth_prob)
    sub_exp_2 = default_generator_2(program, function, sub_exp_2_type, exp_depth_prob=generator_2_depth_prob)
    sub_exp_3 = default_generator_3(program, function, sub_exp_2_type, exp_depth_prob=generator_3_depth_prob)
    return ast.TernaryExpression(sub_exp_1, sub_exp_2, sub_exp_3, operator, exp_type)


def generate_expression_invocation(program, function, return_type, exp_depth_prob):
    # generates the function (if necessary)
    invoked_func = generate_function(program, function, return_type)

    # generates the arguments
    params = []
    expression_depth = probs_helper.random_value(exp_depth_prob)
    lower_exp_depth_prob = {0: 1} if exp_depth_prob == 0 \
        else probs_helper.compute_equal_prob(range(0, expression_depth + 1))
    for name, arg_type in invoked_func.param_types:
        params.append(generate_expression(program, function, arg_type, lower_exp_depth_prob))

    # Count invocation
    program.invocation_as_expr[invoked_func.name] += 1

    # generates the invocation
    return ast.Invocation(invoked_func.name, params, return_type, False)


def generate_expression_incdec(program, function, exp_type, operator):
    assert operator in ["++", "--"]
    sub_exp_1 = generate_lvalue(program, function, exp_type, None)
    post_op = probs_helper.random_value(probs_helper.compute_equal_prob([True, False]))
    return ast.UnaryExpression(operator, sub_exp_1, exp_type, post_op)


################ Statements ####################


def generate_stmt_func(program: Program, function: Function, stmt_depth: Union[int, None] = None)-> ASTNode:
    """Generates a statement inside a function"""
    is_basic_statement = probs_helper.random_value(probs.basic_or_compound_stmt_prob)
    if is_basic_statement:
        return generate_basic_stmt(program, function)
    else:
        stmt_depth = probs_helper.random_value(probs.stmt_depth_prob) if stmt_depth is None else stmt_depth
        if stmt_depth <= 0:
            return generate_basic_stmt(program, function)
        else:
            return generate_compound_stmt(program, function, stmt_depth)


def generate_basic_stmt(program: Program, function: Function) -> ASTNode:
    """Generates a statement with no block inside of it"""
    statement_name = probs_helper.random_value(probs.function_basic_stmt_prob)
    generator_name = "generate_stmt_" + statement_name
    return globals()[generator_name](program, function)


def generate_compound_stmt(program: Program, function: Function, stmt_depth: int)-> ASTNode:
    """Generates a compound statement (with blocks inside of it), given the maximum depth for blocks"""
    statement_name = probs_helper.random_value(probs.function_compound_stmt_prob)
    generator_name = "generate_stmt_" + statement_name
    return globals()[generator_name](program, function, stmt_depth)


def generate_stmt_assignment(program, function):
    operator = "="

    # Get type
    assignment_type_cls = probs_helper.random_value(probs.assignment_types_prob)
    assignment_type = generate_type(program, function, new_type_cls=assignment_type_cls, old_type_obj=None)

    # Generate left part
    left_exp = generate_lvalue(program, function, assignment_type, None)

    # Generate right part
    right_types = type_inference.infer_operands_type(program, function, 1, operator, assignment_type)
    right_type = probs_helper.random_value(probs_helper.compute_equal_prob(right_types))
    right_exp = generate_expression(program, function, right_type, None)

    # Compose all
    return ast.Assignment(left_exp, operator, right_exp, assignment_type)


def generate_stmt_expression_stmt(program, function):
    """Generates an expression statement: <expression> ;"""
    expected_type_cls = probs_helper.random_value(probs.all_types_prob)
    expected_type = generate_type(program, function, new_type_cls=expected_type_cls, old_type_obj=None)
    return generate_expression(program, function, expected_type, None)


def generate_stmt_augmented_assignment(program, function):

    # Get type
    augmented_assignment_type_cls = probs_helper.random_value(probs.augmented_assignment_types_prob)
    augmented_assignment_type = generate_type(program, function, new_type_cls=augmented_assignment_type_cls, old_type_obj=None)

    # Generate left part
    left_exp = generate_lvalue(program, function, augmented_assignment_type, None)

    # Get operator
    operators = ast.get_operators(augmented_assignment_type, "assignment")
    if not operators:
        operator = "="
    else:
        operator, _ = probs_helper.random_value(operators)

    # Generate right part
    right_types = type_inference.infer_operands_type(program, function, 1, operator, augmented_assignment_type)

    right_type = probs_helper.random_value(probs_helper.compute_equal_prob(right_types))
    right_exp = generate_expression(program, function, right_type, None)

    # Compose all
    return ast.Assignment(left_exp, operator, right_exp, augmented_assignment_type)


def generate_stmt_incdec(program, function):
    stmt_type = generate_type(program, function, new_type_cls=None, old_type_obj=None)

    # Check if operators are enabled in expressions
    operators = [k[0] for k in ast.get_operators(stmt_type, "normal").keys()]
    stmt_operators = []
    if '++' in operators:
        stmt_operators.append("++")
    if '--' in operators:
        stmt_operators.append("--")
    if not stmt_operators:
        return generate_stmt_assignment(program, function)

    # Create the statement
    operator = probs_helper.random_value(probs_helper.compute_equal_prob(stmt_operators))
    return generate_expression_incdec(program, function, stmt_type, operator)


def _return_types_distribution(program, white_list):
    d = {klass: 1 for klass in white_list}
    for f in program.functions:
        try:
            d[f.return_type.__class__] += 1
        except KeyError:
            continue
    return d


def generate_stmt_invocation(program, function, invoked_func=None):
    if not invoked_func:
        # generates return type
        func_or_proc = probs_helper.random_value(probs.stmt_invocation_prob)
        if func_or_proc is ast.FuncProc.Proc:
            return_type = ast.Void()
        else:
            # Recalculate probs in relation with the amount of functions
            amounts = _return_types_distribution(program, probs.return_types_prob)
            new_return_types_prob = probs_helper.compute_inverse_proportional_prob(amounts)
            return_type_cls = probs_helper.random_value(new_return_types_prob)
            return_type = generate_type(program, function, new_type_cls=return_type_cls, old_type_obj=None)

        # generates the function (if necessary)
        invoked_func = generate_function(program, function, return_type)

    # generates the params
    params = []
    for name, arg_type in invoked_func.param_types:
        params.append(generate_expression(program, function, arg_type, probs.exp_depth_prob))

    # Count invocation
    program.invocation_as_stmt[invoked_func.name] += 1

    # generates the invocation
    return ast.Invocation(invoked_func.name, params, invoked_func.return_type, True)


def generate_stmt_return(program, function, exp=None):
    c_type = function.return_type
    if isinstance(c_type, ast.Void):
        return ast.Return()
    if isinstance(c_type, ast.SignedInt) and probs_helper.random_value(probs.int_emulate_bool):
        value = probs_helper.random_value({0: 0.5, 1: 0.5})
        if not exp:
            exp = ast.Literal("/* EMULATED BOOL LITERAL */ ({}) {}".format(c_type.name, value), c_type)
        return ast.Return(exp, c_type)
    else:
        if not exp:
            exp = generate_expression(program, function, c_type, probs.return_exp_depth_prob)
        return ast.Return(exp, c_type)

def generate_stmt_block(program: Program, function: Function, stmt_depth: int) -> Block:
    """Generates a block statement"""
    number_statements = probs_helper.random_value(probs.number_stmts_block_prob)
    statements = [generate_stmt_func(program, function, stmt_depth - 1) for _ in range(number_statements)]
    return ast.Block(statements)


def generate_stmt_while(program: Program, function: Function, stmt_depth: int) -> While:
    """Generates a while statement"""
    condition = generate_expression(program, function, SignedInt(), None)
    number_statements = probs_helper.random_value(probs.number_stmts_block_prob)
    statements = [generate_stmt_func(program, function, stmt_depth - 1) for _ in range(number_statements)]
    return ast.While(condition, statements)


def generate_stmt_do(program: Program, function: Function, stmt_depth: int) -> Do:
    """Generates a do statement"""
    number_statements = probs_helper.random_value(probs.number_stmts_block_prob)
    statements = [generate_stmt_func(program, function, stmt_depth - 1) for _ in range(number_statements)]
    condition = generate_expression(program, function, SignedInt(), None)
    return ast.Do(statements, condition)


def generate_stmt_if(program: Program, function: Function, stmt_depth: int) -> If:
    """Generates an if / else statement"""
    # generate condition
    condition = generate_expression(program, function, SignedInt(), None)
    # generate if body
    number_if_statements = probs_helper.random_value(probs.number_stmts_block_prob)
    if_statements = [generate_stmt_func(program, function, stmt_depth - 1) for _ in range(number_if_statements)]
    is_there_return_stmt = not isinstance(function.return_type, Void) and \
                           probs_helper.random_value(probs.return_at_end_if_else_bodies_prob)
    if is_there_return_stmt:  # generate a return statement at the end of the if block
        if_statements.append(generate_stmt_return(program, function,
                                    generate_expression(program, function, function.return_type, probs.exp_depth_prob)))
    # generate else body
    is_there_else_body = probs_helper.random_value(probs.else_body_prob)
    if is_there_else_body:
        number_else_statements = probs_helper.random_value(probs.number_stmts_block_prob)
        else_statements = [generate_stmt_func(program, function, stmt_depth - 1) for _ in range(number_else_statements)]
        if is_there_return_stmt:  # generate a return statement at the end of the else block
            else_statements.append(generate_stmt_return(program, function,
                                generate_expression(program, function, function.return_type, probs.exp_depth_prob)))
        return ast.If(condition, if_statements, else_statements)
    else:
        return ast.If(condition, if_statements, [])


def generate_stmt_for(program: Program, function: Function, stmt_depth: int) -> For:
    """Generates a for statement"""
    initialization = generate_basic_stmt(program, function)
    condition = generate_expression(program, function, SignedInt(), None)
    increment = generate_basic_stmt(program, function)
    number_statements = probs_helper.random_value(probs.number_stmts_block_prob)
    statements = [generate_stmt_func(program, function, stmt_depth-1) for _ in range(number_statements)]
    return For(initialization, condition, increment, statements)


def generate_stmt_switch(program: Program, function: Function, stmt_depth: int) -> Switch:
    """Generates a switch statement"""
    # generate the condition expression
    condition_type = probs_helper.random_value(probs.cases_type_prob)()
    condition = generate_expression(program, function, condition_type, None)
    # generate cases
    number_cases = probs_helper.random_value(probs.number_cases_prob)
    is_there_return_stmt = not isinstance(function.return_type, Void) and \
                           probs_helper.random_value(probs.return_at_end_case_prob)
    cases = dict()
    for _ in range(number_cases):
        literal = generate_literal(program, function, condition_type)
        if literal in cases.keys():
            continue  # avoid repeated literals in case conditions
        number_statements = probs_helper.random_value(probs.number_stmts_block_prob)
        case_statements = [generate_stmt_func(program, function, stmt_depth - 1) for _ in range(number_statements)]
        if is_there_return_stmt:  # append a return statement at the end of the case block
            case_statements.append(generate_stmt_return(program, function,
                            generate_expression(program, function, function.return_type, probs.exp_depth_prob)))
        else:
            is_there_break = probs_helper.random_value(probs.break_case_prob)
            if is_there_break:  # append a break statement at the end of the case block
                case_statements.append(Break())
        cases[literal] = case_statements
    # generate default, if necessary
    is_there_default = probs_helper.random_value(probs.default_switch_prob)
    if is_there_default:
        number_statements = probs_helper.random_value(probs.number_stmts_block_prob)
        default_statements = [generate_stmt_func(program, function, stmt_depth - 1) for _ in range(number_statements)]
        if is_there_return_stmt:
            default_statements.append(generate_stmt_return(program, function,
                            generate_expression(program, function, function.return_type, probs.exp_depth_prob)))
        return Switch(condition, cases, default_statements)
    else:
        return Switch(condition, cases, [])


################ Types ################

def generate_type(program, function, new_type_cls=None, old_type_obj=None):

    new_type_cls = new_type_cls or probs_helper.random_value(probs.all_types_prob)

    # Try to call more specific generator
    try:
        cls_name = utils.camel_case_to_snake_case(new_type_cls.__name__)
        func_name = "generate_type_{}".format(cls_name)
        generator = globals()[func_name]
        if old_type_obj is None:
            old_type_cls = probs_helper.random_value(probs.all_types_prob)
            old_type_obj = generate_type(program, function, new_type_cls=old_type_cls, old_type_obj=None)
        return generator(program, function, old_type_obj)

    # This is called when building a primitive type (Double, Float, Int...)
    except KeyError:
        return new_type_cls()


def generate_type_pointer(program, function, old_type):
    return ast.Pointer(old_type)


def generate_type_array(program, function, old_type):
    size = probs_helper.random_value(probs.array_size)
    return ast.Array(old_type, size=size, pointer_literal=False)


def generate_type_struct(program, function, old_type):
    # Do we take an existing struct with the type we want?
    reuse_struct = probs_helper.random_value(probs.reuse_struct_prob)
    structs = [s for s in program.structs if s.has_type(old_type)]
    existing_structs = len(structs)
    if reuse_struct and existing_structs > 0:
        selected = probs_helper.random_value(probs_helper.compute_equal_prob(range(existing_structs)))
        # An existing struct is taken
        return structs[selected]

    # Do we add a new field to an existing struct to create the expected one?
    reuse_struct = probs_helper.random_value(probs.enhance_existing_struct_prob)
    existing_structs = len(program.structs)
    if reuse_struct and existing_structs > 0:
        if isinstance(old_type, ast.Struct) or (isinstance(old_type, ast.Array) and isinstance(old_type.type, ast.Struct)):
            # Take the least referenced struct. They are ordered by the number of references and the min is selected.
            # E.g.:
            #  struct0 -> struct1 -> array(struct2) -> struct3      # La struct3 has a reference depth of 3
            #  strunc4                                              # La struct4 has a reference depth of 0
            #  struct5 -> struct6                                   # La struct6 has a reference depth of 1
            struct_t = min(program.structs,
                           key=lambda s: max(len(path) for path in ast.reference_paths_to_struct(s, program.structs)))
        else:
            selected = probs_helper.random_value(probs_helper.compute_equal_prob(range(existing_structs)))
            struct_t = program.structs[selected]

        if not struct_t.check_circular_reference(old_type):
            # An existing struct is taken
            if not struct_t.has_type(old_type):
                struct_t.add_field(ast.name_struct_field(old_type, len(struct_t.fields)), old_type)
            return struct_t

    # A new struct is created with that particular field
    struct_name = "struct" + str(len(program.structs))
    struct_t = ast.Struct(struct_name, [ast.name_struct_field(old_type, 0), old_type])
    program.structs.append(struct_t)
    return struct_t


################ Functions and Program ################

def generate_function(program, function, return_type):
    # Do we take an existing function?
    if isinstance(return_type, ast.Void):
        reuse = probs_helper.random_value(probs.reuse_proc_prob)
    else:
        reuse = probs_helper.random_value(probs.reuse_func_prob)
    functions = program.get_functions_by_return_type(return_type)
    # avoid recursion by default
    if reuse and len(functions):
        selected = probs_helper.random_value(probs_helper.compute_equal_prob(range(len(functions))))
        if functions[selected].name != function.name:
            # An existing function is taken
            return functions[selected]

    # A new one is created
    param_types = generate_function_param_types(program, function)
    func_name = "func" + str(len(program.functions))
    new_function = ast.Function(func_name, return_type, param_types)
    program.functions.append(new_function)
    # Generates the statements in the function
    number_statements = probs_helper.random_value(probs.number_stmts_func_prob)
    for i in range(number_statements):
        new_function.stmts.append(generate_stmt_func(program, new_function))
    if not isinstance(return_type, ast.Void):
        new_function.stmts.append(generate_stmt_return(program, new_function, None))
    return new_function


def generate_function_param_types(program, function):
    n_params = probs_helper.random_value(probs.param_number_prob)
    param_types = []
    for i in range(n_params):
        param_type_cls = probs_helper.random_value(probs.param_types_prob)
        param_type = generate_type(program, function, new_type_cls=param_type_cls, old_type_obj=None)

        param_types.append(param_type)
    return param_types


def generate_program():
    number_statements = probs_helper.random_value(probs.number_stmts_main_prob)
    program = ast.Program()
    program.main = main_function = ast.Function("main", ast.SignedInt(), [])
    for i in range(number_statements):
        program.main.stmts.append(generate_stmt_func(program, main_function))
    main_function.stmts.append(generate_stmt_return(program, main_function, exp=None))
    return program


def generate_program_with_function_distribution(distribution, args, remove_unwanted_functions=True):

    removed = []

    def remove_func(f):
        removed.append(f.name)
        program.functions.remove(f)

    def remove_last(cmp):
        for f in reversed(program.functions[:]):
            if cmp(f):
                remove_func(f)
                return

    def count_functions_generated_by_group() -> Dict[str, int]:
        """Returns a dictionary with the number of functions created by each function group (in the distribution)"""
        messages = ["Functions yet to generate: "]
        func_generated_per_group = dict()
        for func_group_name, func_dict in distribution.items():
            number_func_generated = sum(1 for function in program.functions if func_dict["condition"](function))
            func_generated_per_group[func_group_name] = number_func_generated
            messages.extend([func_group_name, ": ", str(func_dict["total"] - number_func_generated), "; "])
        messages.append("Total functions generated = {}.".format(len(program.functions)))
        print_if_verbose("".join(messages))
        return func_generated_per_group

    # Generate a program with its main function
    program = ast.Program()
    program.main = main_function = ast.Function("main", ast.SignedInt(), [])
    while True:
        # Create stmts in the main body
        main_function.stmts.append(generate_stmt_func(program, main_function))
        func_number_by_group = count_functions_generated_by_group()
        # Until all the wanted functions are generated
        if all(func_number_by_group[func_group_name] >= func_dict["total"]
               for func_group_name, func_dict in distribution.items()):
            break  # All the wanted functions were created

    # Remove the generated functions not included in any group in the distribution
    if remove_unwanted_functions:
        for func in program.functions[:]:
            if not any(func_dict["condition"](func) for func_dict in distribution.values()):
                remove_func(func)

    # Adjust the amount of functions in each group
    for func_group_name, func_dict in distribution.items():
        delta = func_number_by_group[func_group_name] - func_dict["total"]
        print_if_verbose("Removing {} {}".format(delta, func_group_name))
        for _ in range(delta):
            remove_last(func_dict["condition"])
    count_functions_generated_by_group()
    before = program.functions[:]

    # Substitute calls to removed functions
    print_if_verbose("")
    print_if_verbose("*" * 80)
    print_if_verbose("* SUBSTITUTIONS")
    print_if_verbose("*" * 80)
    function_subs.visit(program, removed)

    total_number_of_funcs_to_generate = sum(dictionary["total"] for (key, dictionary) in distribution.items())
    after = program.functions[:]
    if len(after) != total_number_of_funcs_to_generate and args.verbose:
        print_if_verbose("")
        print_if_verbose("*" * 80)
        print_if_verbose("* WARNING: NEW FUNCTIONS")
        print_if_verbose("*" * 80)
        for func in after:
            if func not in before:
                print_if_verbose(func)

    ###
    # Generate statement invocations to reach a ratio expr_invocation/stmt_invocation = 2
    ###

    # Disable invocations in the generations of parameter expressions
    new_probs = {False: 1, True: 0}
    old_probs = dict(probs.call_prob)
    probs.call_prob = new_probs

    # Generate statement invocations
    print_if_verbose("")
    print_if_verbose("*" * 80)
    print_if_verbose("* GENERATING INVOCATIONS")
    print_if_verbose("*" * 80)
    for func in program.functions:
        amount = 2 * program.invocation_as_expr[func.name] - program.invocation_as_stmt[func.name]
        print_if_verbose("{} needs '2 * {} - {} = {}' statement invocations."
                         .format(func.name, program.invocation_as_expr[func.name],
                                 program.invocation_as_stmt[func.name], amount))
        if amount <= 0:
            continue
        for _ in range(amount):
            invoc = generate_stmt_invocation(program, program.main, invoked_func=func)
            main_function.stmts.append(invoc)

    # Restore probability
    probs.call_prob = dict(old_probs)

    ###
    # Add return statement
    ###
    main_function.stmts.append(generate_stmt_return(program, main_function, exp=None))

    return program

