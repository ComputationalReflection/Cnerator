# -*- coding: utf-8 -*-

"""This file defines the probability for creating each part of the program.
Probability may be defined manually, or using the helper functions in probs_helper.
They are expressed as dictionaries: {value: probability of that value}.
The sum of the probabilities must be 1.0.
For a fixed value, just set its probability to 1.0.
"""

from cnerator import probs_helper, ast, limitations

# <FILTER RETURN TYPES>
if limitations.allowed_return_types:
    # WARNING: Change the type here in concordance with limitations.py file
    basic_types_prob = probs_helper.compute_equal_prob([
        ast.Bool,
        ast.SignedChar,
        # ast.UnsignedChar,
        # ast.SignedShortInt,
        # ast.UnsignedShortInt,
        ast.SignedInt,
        # ast.UnsignedInt,
        # ast.SignedLongInt,
        # ast.UnsignedLongInt,
        # ast.SignedLongLongInt,
        # ast.UnsignedLongLongInt,
        # ast.Float,
        # ast.Double,
        # ast.LongDouble,
    ])
    assignment_types_prob = probs_helper.compute_equal_prob(set(basic_types_prob.keys() + [
        # ast.Pointer,
        # ast.Struct,
    ]))
    augmented_assignment_types_prob = basic_types_prob
    all_types_prob = probs_helper.compute_equal_prob(set(basic_types_prob.keys() + [
        # ast.Pointer,
        # ast.Array,
        # ast.Struct,
    ]))
else:
    basic_types_prob = probs_helper.compute_equal_prob([
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
    ])
    assignment_types_prob = probs_helper.compute_equal_prob(set(basic_types_prob.keys()).union({
        ast.Pointer,
        ast.Struct,
    }))
    augmented_assignment_types_prob = basic_types_prob
    all_types_prob = probs_helper.compute_equal_prob(set(basic_types_prob.keys()).union({
        ast.Pointer,
        ast.Array,
        ast.Struct,
    }))
# <FILTER RETURN TYPES/>


implicit_promotion_bool = {True: 0.5, False: 0.5}
# <FILTER RETURN TYPES>
if limitations.allowed_return_types:
    # WARNING: Change the type here in concordance with limitations.py file
    promotions_prob = {
        ast.Bool: probs_helper.compute_equal_prob([
            ast.Bool
        ]),
        ast.UnsignedChar: probs_helper.compute_equal_prob([
            # ast.Bool,
            # ast.SignedChar,
            ast.UnsignedChar,
        ]),
        ast.SignedChar: probs_helper.compute_equal_prob([
            # ast.Bool,
            ast.SignedChar,
            # ast.UnsignedChar,
        ]),
        ast.UnsignedShortInt: probs_helper.compute_equal_prob([
            # ast.Bool,
            # ast.SignedChar,
            # ast.UnsignedChar,
            # ast.SignedShortInt,
            ast.UnsignedShortInt,
        ]),
        ast.SignedShortInt: probs_helper.compute_equal_prob([
            # ast.Bool,
            # ast.SignedChar,
            # ast.UnsignedChar,
            ast.SignedShortInt,
            # ast.UnsignedShortInt,
        ]),
        ast.UnsignedInt: probs_helper.compute_equal_prob([
            # ast.Bool,
            # ast.SignedChar,
            # ast.UnsignedChar,
            # ast.SignedShortInt,
            # ast.UnsignedShortInt,
            # ast.SignedInt,
            ast.UnsignedInt,
            # ast.SignedLongInt,
            # ast.UnsignedLongInt,
        ]),
        ast.SignedInt: probs_helper.compute_equal_prob([
            # ast.Bool,
            # ast.SignedChar,
            # ast.UnsignedChar,
            # ast.SignedShortInt,
            # ast.UnsignedShortInt,
            ast.SignedInt,
            # ast.UnsignedInt,
            # ast.SignedLongInt,
            # ast.UnsignedLongInt,
        ]),
        ast.UnsignedLongInt: probs_helper.compute_equal_prob([
            # ast.Bool,
            # ast.SignedChar,
            # ast.UnsignedChar,
            # ast.SignedShortInt,
            # ast.UnsignedShortInt,
            # ast.SignedInt,
            # ast.UnsignedInt,
            # ast.SignedLongInt,
            ast.UnsignedLongInt,
        ]),
        ast.SignedLongInt: probs_helper.compute_equal_prob([
            # ast.Bool,
            # ast.SignedChar,
            # ast.UnsignedChar,
            # ast.SignedShortInt,
            # ast.UnsignedShortInt,
            # ast.SignedInt,
            # ast.UnsignedInt,
            ast.SignedLongInt,
            # ast.UnsignedLongInt,
        ]),
        ast.UnsignedLongLongInt: probs_helper.compute_equal_prob([
            # ast.Bool,
            # ast.SignedChar,
            # ast.UnsignedChar,
            # ast.SignedShortInt,
            # ast.UnsignedShortInt,
            # ast.SignedInt,
            # ast.UnsignedInt,
            # ast.SignedLongInt,
            # ast.UnsignedLongInt,
            # ast.SignedLongLongInt,
            ast.UnsignedLongLongInt,
        ]),
        ast.SignedLongLongInt: probs_helper.compute_equal_prob([
            # ast.Bool,
            # ast.SignedChar,
            # ast.UnsignedChar,
            # ast.SignedShortInt,
            # ast.UnsignedShortInt,
            # ast.SignedInt,
            # ast.UnsignedInt,
            # ast.SignedLongInt,
            # ast.UnsignedLongInt,
            ast.SignedLongLongInt,
            # ast.UnsignedLongLongInt,
        ]),
        ast.Float: probs_helper.compute_equal_prob([
            # ast.Bool,
            # ast.SignedChar,
            # ast.UnsignedChar,
            # ast.SignedShortInt,
            # ast.UnsignedShortInt,
            ast.Float,
        ]),
        ast.Double: probs_helper.compute_equal_prob([
            # ast.Bool,
            # ast.SignedChar,
            # ast.UnsignedChar,
            # ast.SignedShortInt,
            # ast.UnsignedShortInt,
            # ast.SignedInt,
            # ast.UnsignedInt,
            # ast.SignedLongInt,
            # ast.UnsignedLongInt,
            # ast.Float,
            ast.Double,
        ]),
        ast.LongDouble: probs_helper.compute_equal_prob([
            # ast.Bool,
            # ast.SignedChar,
            # ast.UnsignedChar,
            # ast.SignedShortInt,
            # ast.UnsignedShortInt,
            # ast.SignedInt,
            # ast.UnsignedInt,
            # ast.SignedLongInt,
            # ast.UnsignedLongInt,
            # ast.Float,
            # ast.Double,
            ast.LongDouble,
        ]),
    }
else:
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
# <FILTER RETURN TYPES/>


array_size = probs_helper.compute_equal_prob(range(1, 10))
reuse_struct_field_prob = probs_helper.compute_equal_prob(range(1, 2))
reuse_struct_prob = probs_helper.compute_equal_prob(range(1, 5))
array_literal_initialization_prob = {True: 0.0, False: 1.0}
struct_literal_initialization_prob = {True: 0.0, False: 1.0}
int_emulate_bool = {True: 0.2, False: 0.8}


# XXX: Cuidado al cambiar la distribución porque en el código se vuelven a calcular las sucesivas profundidades con
# equiprobabilidad
exp_depth_prob = probs_helper.compute_equal_prob(range(0, 2))
return_exp_depth_prob = probs_helper.compute_equal_prob(range(1, 2))


call_prob = {True: 0.3, False: 0.7}
basic_expression_prob = probs_helper.compute_equal_prob(('generate_literal', 'generate_local_var',
                                                         'generate_global_var', 'generate_param_var'))


param_number_prob = {0: 0.10, 1: 0.20, 2: 0.20, 3: 0.20, 4: 0.20, 5: 0.05, 6: 0.05}
param_types_prob = all_types_prob
# stmt_invocation_prob = {ast.FuncProc.Func: 0.2, ast.FuncProc.Proc: 0.8}
stmt_invocation_prob = {ast.FuncProc.Func: 0.88, ast.FuncProc.Proc: 0.12}
return_types_prob = all_types_prob


global_vars_prob = probs_helper.compute_equal_prob(range(1, 3))
local_vars_prob = probs_helper.compute_equal_prob(range(1, 2))
reuse_func_prob = {True: 0.8, False: 0.2}
reuse_proc_prob = {True: 0.7, False: 0.3}

# XXX: Cuidado al cambiar la distribución porque en el código se vuelven a calcular las sucesivas profundidades con
# equiprobabilidad
lvalue_depth_prob = probs_helper.compute_equal_prob(range(0, 3))
lvalue_prob = probs_helper.compute_equal_prob(('generate_global_var', 'generate_local_var'))

function_stmt_prob = {'generate_stmt_assignment': 0.6, 'generate_stmt_invocation': 0.2,
                       'generate_stmt_incdec': 0.1, 'generate_stmt_augmented_assignment': 0.1}
procedure_stmt_prob = function_stmt_prob

# number_stmts_main_prob = {50000: 1.0}                                           # AUMENTA EL ANCHO DEL ARBOL
number_stmts_main_prob = {10: 1.0}                                           # AUMENTA EL ANCHO DEL ARBOL
#number_stmts_func_prob = {1: 0.3, 2: 0.3, 3: 0.3, 4: 0.1}
#number_stmts_func_prob = {1: 0.3, 2: 0.3, 3: 0.2, 4: 0.2}
number_stmts_func_prob = {1: 0.2, 2: 0.2, 3: 0.2, 4: 0.2, 5: 0.1, 6: 0.1}
