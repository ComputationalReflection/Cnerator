# -*- coding: utf-8 -*-

"""This file defines the probability for creating each part of the program.
Probability may be defined manually, or using the helper functions in probs_helper.
They are expressed as dictionaries: {value: probability of that value}.
The sum of the probabilities must be 1.0.
For a fixed value, just set its probability to 1.0.
The doc:Dict[str,str] documents all the probabilities meanings to be shown to the user.
"""

from cnerator import probs_helper, ast

# the doc:Dict[str,str] documents all the probabilities meanings to be shown to the user.
doc = dict()


# ------------ Types --------------

primitive_types = {
    ast.Bool,
    ast.SignedChar,
    ast.UnsignedChar,
    ast.SignedShortInt,
    ast.UnsignedShortInt,
    ast.SignedInt,
    ast.UnsignedInt,
    ast.SignedLongInt,
    ast.UnsignedLongInt,
    ast.SignedLongLongInt,
    ast.UnsignedLongLongInt,
    ast.Float,
    ast.Double,
    ast.LongDouble,
}

doc['primitive_types_prob'] = "probabilities among primitive types (default: equal probability for all the types)"
primitive_types_prob = probs_helper.compute_equal_prob(primitive_types)

doc['assignment_types_prob'] = "assignment type (default: equal probability for all the types)"
assignment_types_prob = probs_helper.compute_equal_prob(set(primitive_types).union({ast.Pointer, ast.Struct}))

doc['augmented_assignment_types_prob'] = "augmented assignment type (+=, -=, *=...) " \
                                         "(default: equal probability for primitive types)"
augmented_assignment_types_prob = probs_helper.compute_equal_prob(primitive_types)

doc['all_types_prob'] = "type probability when any type may occur in a syntax construction " \
                        "(default: equal probability for any type)"
all_types_prob = probs_helper.compute_equal_prob(set(primitive_types).union({ ast.Pointer, ast.Array, ast.Struct}))

doc['array_size'] = "size of the arrays to be created (default: 1-10)"
array_size = probs_helper.compute_equal_prob(set(range(1, 10)))

doc['reuse_struct_prob'] = "when a struct is needed, probability of using and existing one " \
                           "rather than creating a new one (default: 90%)"
reuse_struct_prob = {True: 0.9, False: 0.1}

doc['enhance_existing_struct_prob'] = "when a struct is needed, probability of extending an existing one with " \
                                      "the demanded field rather than creating a new one (default: 70%)"
enhance_existing_struct_prob = {True: 0.7, False: 0.3}

doc['array_literal_initialization_prob'] = "array initialization upon definition (default: 10%)"
array_literal_initialization_prob = {True: 0.1, False: 0.9}

doc['struct_literal_initialization_prob'] = "struct initialization upon definition (default: 10%)"
struct_literal_initialization_prob = {True: 0.1, False: 0.9}


# ------------ Expressions --------------

doc['exp_depth_prob'] = "expression depth (default: equal probabilities for [0-2])"
exp_depth_prob = probs_helper.compute_equal_prob(set(range(0, 3)))

doc['return_exp_depth_prob'] = "expression depth for the particular expressions to be returned by functions " \
                               "(default: equal probabilities for [0-2])"
return_exp_depth_prob = probs_helper.compute_equal_prob(set(range(0, 3)))


# ------------ Functions --------------

doc['call_prob'] = "probability that a new expression is a function invocation (default: 20%)"
call_prob = {True: 0.2, False: 0.8}

doc['basic_expression_prob'] = "basic expressions (default: same probability among literal, local_var, " \
                               "global_var, and param_var)"
basic_expression_prob = probs_helper.compute_equal_prob({'literal', 'local_var', 'global_var', 'param_var'})

doc['param_number_prob'] = "number of parameters (default: 10% for 1, 20% for [1,4] and 5% for [5,6])"
param_number_prob = {0: 0.10, 1: 0.20, 2: 0.20, 3: 0.20, 4: 0.20, 5: 0.05, 6: 0.05}

doc['param_types_prob'] = "types of the parameters (default: all types are equally likely)"
param_types_prob = all_types_prob

# stmt_invocation_prob = {ast.FuncProc.Func: 0.2, ast.FuncProc.Proc: 0.8}
doc['stmt_invocation_prob'] = "invocation statements to functions or procedures (default: function=88%, procedure=12%)"
stmt_invocation_prob = {ast.FuncProc.Func: 0.88, ast.FuncProc.Proc: 0.12}

doc['return_types_prob'] = "function return types (default: all types are equally likely)"
return_types_prob = all_types_prob

doc['int_emulate_bool'] = "probability of using generating a bool return (0 or 1) when an int type is expected " \
                          "(default: 20%)"
int_emulate_bool = {True: 0.2, False: 0.8}


# ------------ Variables --------------

doc['new_global_var_prob'] = "probability of creating a new global variable when one of the expected type" \
                             "already exists (default: 10%)"
new_global_var_prob = {True: 0.1, False: 0.9}

doc['new_local_var_prob'] = "probability of creating a new local variable when one of the expected type" \
                             "already exists (default: 10%)"
new_local_var_prob = {True: 0.01, False: 0.99}

doc['reuse_func_prob'] = "probability of reusing an existing function of the expected type (default: 80%)"
reuse_func_prob = {True: 0.8, False: 0.2}

doc['reuse_proc_prob'] = "probability of reusing an existing procedure of the expected type (default: 70%)"
reuse_proc_prob = {True: 0.7, False: 0.3}

doc['global_or_local_as_basic_lvalue_prob'] = "When a basic lvalue needs to be generated, this is the " \
                                              "probability of using a global variable; otherwise, " \
                                              "a local variable is used (default: 50%)"
global_or_local_as_basic_lvalue_prob = {True: 0.5, False: 0.5}


# ------------ Statements --------------

doc['function_stmt_prob'] = "each kind of statement in functions (default: assignment=60%, invocation=20%, " \
                            "increment/decrement= 20%, augmented assignment010%)"
function_stmt_prob = {'assignment': 0.6, 'invocation': 0.2, 'incdec': 0.1, 'augmented_assignment': 0.1}

doc['procedure_stmt_prob'] = "each kind of statement in procedures (default: assignment=60%, invocation=20%, " \
                            "increment/decrement= 20%, augmented assignment010%)"
procedure_stmt_prob = function_stmt_prob

doc['number_stmts_main_prob'] = "number of statements in the main function " \
                                "(default: equal probabilities between 5 and 10)"
number_stmts_main_prob = probs_helper.compute_equal_prob(set(range(5, 11)))

doc['number_stmts_func_prob'] = "number of statements in functions " \
                                "(default: 20% for [1,4] and 10% for [5, 6])"
number_stmts_func_prob = {1: 0.2, 2: 0.2, 3: 0.2, 4: 0.2, 5: 0.1, 6: 0.1}


# ------------ Promotions --------------

doc['implicit_promotion_bool'] = "if an expression is expected, the probability to generate it with another type " \
                                 "promotable to the expected one (default: 30%)"
implicit_promotion_bool = {True: 0.3, False: 0.7}


doc['promotions_prob'] = "promotions between types (default: all the conversions are equally likely)"
#  the key of the dictionary represents the higher type (to) and the content the low type (from)
promotions_prob = {
    ast.Bool: probs_helper.compute_equal_prob({
        ast.Bool
    }),
    ast.UnsignedChar: probs_helper.compute_equal_prob({
        ast.Bool,
        ast.SignedChar,
        ast.UnsignedChar,
    }),
    ast.SignedChar: probs_helper.compute_equal_prob({
        ast.Bool,
        ast.SignedChar,
        ast.UnsignedChar,
    }),
    ast.UnsignedShortInt: probs_helper.compute_equal_prob({
        ast.Bool,
        ast.SignedChar,
        ast.UnsignedChar,
        ast.SignedShortInt,
        ast.UnsignedShortInt,
    }),
    ast.SignedShortInt: probs_helper.compute_equal_prob({
        ast.Bool,
        ast.SignedChar,
        ast.UnsignedChar,
        ast.SignedShortInt,
        ast.UnsignedShortInt,
    }),
    ast.UnsignedInt: probs_helper.compute_equal_prob({
        ast.Bool,
        ast.SignedChar,
        ast.UnsignedChar,
        ast.SignedShortInt,
        ast.UnsignedShortInt,
        ast.SignedInt,
        ast.UnsignedInt,
        ast.SignedLongInt,
        ast.UnsignedLongInt,
    }),
    ast.SignedInt: probs_helper.compute_equal_prob({
        ast.Bool,
        ast.SignedChar,
        ast.UnsignedChar,
        ast.SignedShortInt,
        ast.UnsignedShortInt,
        ast.SignedInt,
        ast.UnsignedInt,
        ast.SignedLongInt,
        ast.UnsignedLongInt,
    }),
    ast.UnsignedLongInt: probs_helper.compute_equal_prob({
        ast.Bool,
        ast.SignedChar,
        ast.UnsignedChar,
        ast.SignedShortInt,
        ast.UnsignedShortInt,
        ast.SignedInt,
        ast.UnsignedInt,
        ast.SignedLongInt,
        ast.UnsignedLongInt,
    }),
    ast.SignedLongInt: probs_helper.compute_equal_prob({
        ast.Bool,
        ast.SignedChar,
        ast.UnsignedChar,
        ast.SignedShortInt,
        ast.UnsignedShortInt,
        ast.SignedInt,
        ast.UnsignedInt,
        ast.SignedLongInt,
        ast.UnsignedLongInt,
    }),
    ast.UnsignedLongLongInt: probs_helper.compute_equal_prob({
        ast.Bool,
        ast.SignedChar,
        ast.UnsignedChar,
        ast.SignedShortInt,
        ast.UnsignedShortInt,
        ast.SignedInt,
        ast.UnsignedInt,
        ast.SignedLongInt,
        ast.UnsignedLongInt,
        ast.SignedLongLongInt,
        ast.UnsignedLongLongInt,
    }),
    ast.SignedLongLongInt: probs_helper.compute_equal_prob({
        ast.Bool,
        ast.SignedChar,
        ast.UnsignedChar,
        ast.SignedShortInt,
        ast.UnsignedShortInt,
        ast.SignedInt,
        ast.UnsignedInt,
        ast.SignedLongInt,
        ast.UnsignedLongInt,
        ast.SignedLongLongInt,
        ast.UnsignedLongLongInt,
    }),
    ast.Float: probs_helper.compute_equal_prob({
        ast.Bool,
        ast.SignedChar,
        ast.UnsignedChar,
        ast.SignedShortInt,
        ast.UnsignedShortInt,
        ast.Float,
    }),
    ast.Double: probs_helper.compute_equal_prob({
        ast.Bool,
        ast.SignedChar,
        ast.UnsignedChar,
        ast.SignedShortInt,
        ast.UnsignedShortInt,
        ast.SignedInt,
        ast.UnsignedInt,
        ast.SignedLongInt,
        ast.UnsignedLongInt,
        ast.Float,
        ast.Double,
    }),
    ast.LongDouble: probs_helper.compute_equal_prob({
        ast.Bool,
        ast.SignedChar,
        ast.UnsignedChar,
        ast.SignedShortInt,
        ast.UnsignedShortInt,
        ast.SignedInt,
        ast.UnsignedInt,
        ast.SignedLongInt,
        ast.UnsignedLongInt,
        ast.Float,
        ast.Double,
        ast.LongDouble,
    }),
}
