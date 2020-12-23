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

primitive_types = [
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
]

doc['primitive_types_prob'] = "probabilities among primitive types (default equal probability for all the types)"
primitive_types_prob = probs_helper.compute_equal_prob(primitive_types)

doc['assignment_types_prob'] = "assignment type (default equal probability for all the types)"
assignment_types_prob = probs_helper.compute_equal_prob(set(primitive_types).union({
    ast.Pointer,
    ast.Struct,
}))

doc[''] = " (default )"
augmented_assignment_types_prob = probs_helper.compute_equal_prob(primitive_types)

doc[''] = " (default )"
all_types_prob = probs_helper.compute_equal_prob(set(primitive_types).union({
    ast.Pointer,
    ast.Array,
    ast.Struct,
}))


doc['array_size'] = "size of the arrays to be created (default 1-10)"
array_size = probs_helper.compute_equal_prob(range(1, 10))

doc[''] = " (default )"
reuse_struct_field_prob = probs_helper.compute_equal_prob(range(1, 2))

doc[''] = " (default )"
reuse_struct_prob = probs_helper.compute_equal_prob(range(1, 5))

doc[''] = " (default )"
array_literal_initialization_prob = {True: 0.0, False: 1.0}

doc[''] = " (default )"
struct_literal_initialization_prob = {True: 0.0, False: 1.0}


# ------------ Expressions --------------


# XXX: Cuidado al cambiar la distribución porque en el código se vuelven a calcular las sucesivas profundidades con
# equiprobabilidad
doc[''] = " (default )"
exp_depth_prob = probs_helper.compute_equal_prob(range(0, 2))

doc[''] = " (default )"
return_exp_depth_prob = probs_helper.compute_equal_prob(range(1, 2))



# ------------ Functions --------------

doc[''] = " (default )"
call_prob = {True: 0.3, False: 0.7}

doc[''] = " (default )"
basic_expression_prob = probs_helper.compute_equal_prob(('generate_literal', 'generate_local_var',
                                                         'generate_global_var', 'generate_param_var'))

doc[''] = " (default )"
param_number_prob = {0: 0.10, 1: 0.20, 2: 0.20, 3: 0.20, 4: 0.20, 5: 0.05, 6: 0.05}

doc[''] = " (default )"
param_types_prob = all_types_prob

# stmt_invocation_prob = {ast.FuncProc.Func: 0.2, ast.FuncProc.Proc: 0.8}
doc[''] = " (default )"
stmt_invocation_prob = {ast.FuncProc.Func: 0.88, ast.FuncProc.Proc: 0.12}

doc[''] = " (default )"
return_types_prob = all_types_prob

doc['int_emulate_bool'] = "probability of using generating a bool return (0 or 1) when an int type is expected " \
                          "(default 20%)"
int_emulate_bool = {True: 0.2, False: 0.8}


# ------------ Variables --------------

doc[''] = " (default )"
global_vars_prob = probs_helper.compute_equal_prob(range(1, 3))

doc[''] = " (default )"
local_vars_prob = probs_helper.compute_equal_prob(range(1, 2))

doc[''] = " (default )"
reuse_func_prob = {True: 0.8, False: 0.2}

doc[''] = " (default )"
reuse_proc_prob = {True: 0.7, False: 0.3}

# XXX: Cuidado al cambiar la distribución porque en el código se vuelven a calcular las sucesivas profundidades con
# equiprobabilidad
doc[''] = " (default )"
lvalue_depth_prob = probs_helper.compute_equal_prob(range(0, 3))

doc[''] = " (default )"
lvalue_prob = probs_helper.compute_equal_prob(('generate_global_var', 'generate_local_var'))



# ------------ Statements --------------


doc[''] = " (default )"
function_stmt_prob = {'generate_stmt_assignment': 0.6, 'generate_stmt_invocation': 0.2,
                       'generate_stmt_incdec': 0.1, 'generate_stmt_augmented_assignment': 0.1}

procedure_stmt_prob = function_stmt_prob

# number_stmts_main_prob = {50000: 1.0}                                           # AUMENTA EL ANCHO DEL ARBOL
doc[''] = " (default )"
number_stmts_main_prob = {10: 1.0}                                           # AUMENTA EL ANCHO DEL ARBOL

#number_stmts_func_prob = {1: 0.3, 2: 0.3, 3: 0.3, 4: 0.1}
#number_stmts_func_prob = {1: 0.3, 2: 0.3, 3: 0.2, 4: 0.2}
doc[''] = " (default )"
number_stmts_func_prob = {1: 0.2, 2: 0.2, 3: 0.2, 4: 0.2, 5: 0.1, 6: 0.1}



# ------------ Promotions --------------

doc['implicit_promotion_bool'] = "if an expression is expected, the probability to generate it with another type " \
                                 "promotable to the expected one (default 30%)"
implicit_promotion_bool = {True: 0.3, False: 0.7}



# KEY = high (to), CONTENT = low (from)

doc[''] = " (default )"
promotions_prob = {
    ast.Bool: probs_helper.compute_equal_prob([
        ast.Bool
    ]),
    ast.UnsignedChar: probs_helper.compute_equal_prob([
        ast.Bool,
        ast.SignedChar,
        ast.UnsignedChar,
    ]),
    ast.SignedChar: probs_helper.compute_equal_prob([
        ast.Bool,
        ast.SignedChar,
        ast.UnsignedChar,
    ]),
    ast.UnsignedShortInt: probs_helper.compute_equal_prob([
        ast.Bool,
        ast.SignedChar,
        ast.UnsignedChar,
        ast.SignedShortInt,
        ast.UnsignedShortInt,
    ]),
    ast.SignedShortInt: probs_helper.compute_equal_prob([
        ast.Bool,
        ast.SignedChar,
        ast.UnsignedChar,
        ast.SignedShortInt,
        ast.UnsignedShortInt,
    ]),
    ast.UnsignedInt: probs_helper.compute_equal_prob([
        ast.Bool,
        ast.SignedChar,
        ast.UnsignedChar,
        ast.SignedShortInt,
        ast.UnsignedShortInt,
        ast.SignedInt,
        ast.UnsignedInt,
        ast.SignedLongInt,
        ast.UnsignedLongInt,
    ]),
    ast.SignedInt: probs_helper.compute_equal_prob([
        ast.Bool,
        ast.SignedChar,
        ast.UnsignedChar,
        ast.SignedShortInt,
        ast.UnsignedShortInt,
        ast.SignedInt,
        ast.UnsignedInt,
        ast.SignedLongInt,
        ast.UnsignedLongInt,
    ]),
    ast.UnsignedLongInt: probs_helper.compute_equal_prob([
        ast.Bool,
        ast.SignedChar,
        ast.UnsignedChar,
        ast.SignedShortInt,
        ast.UnsignedShortInt,
        ast.SignedInt,
        ast.UnsignedInt,
        ast.SignedLongInt,
        ast.UnsignedLongInt,
    ]),
    ast.SignedLongInt: probs_helper.compute_equal_prob([
        ast.Bool,
        ast.SignedChar,
        ast.UnsignedChar,
        ast.SignedShortInt,
        ast.UnsignedShortInt,
        ast.SignedInt,
        ast.UnsignedInt,
        ast.SignedLongInt,
        ast.UnsignedLongInt,
    ]),
    ast.UnsignedLongLongInt: probs_helper.compute_equal_prob([
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
    ]),
    ast.SignedLongLongInt: probs_helper.compute_equal_prob([
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
    ]),
    ast.Float: probs_helper.compute_equal_prob([
        ast.Bool,
        ast.SignedChar,
        ast.UnsignedChar,
        ast.SignedShortInt,
        ast.UnsignedShortInt,
        ast.Float,
    ]),
    ast.Double: probs_helper.compute_equal_prob([
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
    ]),
    ast.LongDouble: probs_helper.compute_equal_prob([
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
    ]),
}
