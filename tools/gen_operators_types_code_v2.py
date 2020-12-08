# -*- coding: utf-8 -*-

from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
from __future__ import unicode_literals

import os.path
import re
from collections import defaultdict

translation = {
    "b":    "Bool",
    "c":    "SignedChar",
    "uc":   "UnsignedChar",
    "sc":   "SignedChar",
    "i":    "SignedInt",
    "ui":   "UnsignedInt",
    "si":   "SignedInt",
    "Si":   "SignedShortInt",
    "uSi":  "UnsignedShortInt",
    "sSi":  "SignedShortInt",
    "Li":   "SignedLongInt",
    "uLi":  "UnsignedLongInt",
    "sLi":  "SignedLongInt",
    "LLi":  "SignedLongLongInt",
    "uLLi": "UnsignedLongLongInt",
    "sLLi": "SignedLongLongInt",
    "f":    "Float",
    "d":    "Double",
    "Ld":   "LongDouble",
}
types = set(translation.values() + [
    "Pointer",
    "Array",
    "Struct"
])


def translate(name):
    new_name = translation.get(name)
    if new_name:
        return new_name
    else:
        if name.startswith("p"):
            return "Pointer"
        if name.startswith("a"):
            return "Array"
        if any(token in name for token in ["P2D", "P3D"]):
            return "Struct"
    raise ValueError("Unknown var name")


def camel_case_to_snake_case(name):
    s1 = re.sub('(.)([A-Z][a-z]+)', r'\1_\2', name)
    return re.sub('([a-z0-9])([A-Z])', r'\1_\2', s1).lower()


by_operands = defaultdict(lambda: defaultdict(lambda: defaultdict(dict)))
by_return = defaultdict(lambda: defaultdict(lambda: defaultdict(set)))
available_common_operators = defaultdict(lambda: defaultdict(set))
available_lvalue_operators = defaultdict(lambda: defaultdict(set))

with open("operators_types/operators_types.c", "r") as f:
    for line in f:
        # This pattern operators with arity 2
        m = re.match(r"^    ([a-zA-Z0-9_]+) = ([a-zA-Z0-9_]+) ([^ ]+) ([a-zA-Z0-9_]+);$", line)
        if m:
            print(line.strip(), end= " -> ")
            result_t, op1_t, operator, op2_t = m.groups()
            op1_t = translate(op1_t)
            op2_t = translate(op2_t)
            result_t = translate(result_t)

            # Filter types
            # if any(t != "SignedShortInt" for t in [op1_t, op2_t, result_t]):
            #     print("IGNORED")
            #     continue

            print("{} = {} {} {}".format(result_t, op1_t, operator, op2_t))
            try:
                by_operands[2][operator][op1_t][op2_t].add(result_t)
            except KeyError:
                by_operands[2][operator][op1_t][op2_t] = set()
                by_operands[2][operator][op1_t][op2_t].add(result_t)
            by_return[2][operator][result_t].add((op1_t, op2_t))
            available_common_operators[2][result_t].add(operator)
            continue

        # This pattern operators with arity 1
        m = re.match(r"    ([a-zA-Z0-9_]+) = ([^ ]+) ([a-zA-Z0-9_]+);", line)
        if m:
            print(line.strip(), end= " -> ")
            result_t, operator, op1_t = m.groups()
            op1_t = translate(op1_t)
            result_t = translate(result_t)

            # Filter types
            # if any(t != "SignedShortInt" for t in [op1_t, result_t]):
            #     print("IGNORED")
            #     continue

            print("{} = {} {}".format(result_t, operator, op1_t))
            try:
                by_operands[1][operator][op1_t].add(result_t)
            except AttributeError as error:
                assert str(error) == "'dict' object has no attribute 'add'"
                by_operands[1][operator][op1_t] = set()
                by_operands[1][operator][op1_t].add(result_t)
            by_return[1][operator][result_t].add(op1_t)
            available_common_operators[1][result_t].add(operator)


with open("casts/casts.c", "r") as f:
    operator = "()"
    for line in f:
        # This patter is for casts
        m = re.match(r"^    ([a-zA-Z0-9_]+) = .+ ([a-zA-Z0-9_]+);$", line)
        if m:
            print(line.strip(), end=" -> ")
            result_t, op1_t = m.groups()
            op1_t = translate(op1_t)
            result_t = translate(result_t)

            # Filter types
            # if any(t != "SignedShortInt" for t in [op1_t, result_t]):
            #     print("IGNORED")
            #     continue

            print("{} = (cast) {}".format(result_t, op1_t))
            try:
                by_operands[1][operator][op1_t].add(result_t)
            except AttributeError as error:
                assert str(error) == "'dict' object has no attribute 'add'"
                by_operands[1][operator][op1_t] = set()
                by_operands[1][operator][op1_t].add(result_t)
            by_return[1][operator][result_t].add(op1_t)
            available_common_operators[1][result_t].add(operator)


###
# Add operators "&", ".", "->" and "*" (unary)
###
for t in types:

    # Filter types
    # if t != "SignedShortInt":
    #     continue

    data = [
        ("Pointer", "&", t),
        (t, "*", "Pointer"),
        (t, ".", "Struct"),
        (t, "->", "Struct"),
    ]
    for result_t, operator, op1_t in data:
        # by_operands[1][operator][op1_t].add(result_t if operator == "&" else None)
        # by_return[1][operator][result_t].add(op1_t)
        available_common_operators[1][result_t].add(operator)
        if operator != "&":
            available_lvalue_operators[1][result_t].add(operator)


###
# Add operator "[]" (binary)
###
op1_t = "Array"
operator = "[]"
for op2_t in [t for t in types if "Int" in t]: # Selects all subtypes of Ints

    # Filter types
    # if op2_t != "SignedShortInt":
    #     continue

    for result_t in types:

        # Filter types
        # if result_t != "SignedShortInt":
        #     continue

        # by_operands[2][operator][op1_t][op2_t].add(None)
        # by_return[2][operator][result_t].add((op1_t, op2_t))
        available_common_operators[2][result_t].add(operator)
        available_lvalue_operators[2][result_t].add(operator)


###
# Compose a dict that returns the return type based on the operands types
###
by_operands_dict_parts = []
by_operands_dict_parts.append("{")
for k_arity, v_arity in sorted(by_operands.iteritems()):
    by_operands_dict_parts.append("    {}: {{".format(k_arity))
    for k_operator, v_operator in sorted(v_arity.iteritems()):
        by_operands_dict_parts.append("        '{}': {{".format(k_operator))
        for k_op1, v_op1 in sorted(v_operator.iteritems()):
            if k_arity == 1:
                by_operands_dict_parts.append("            {}: [".format(k_op1))
                for data in sorted(v_op1):
                    op1_t = data
                    by_operands_dict_parts.append("                {},".format(data))
                by_operands_dict_parts.append("            ],")
            else:
                by_operands_dict_parts.append("            {}: {{".format(k_op1))
                for k_op2, v_op2 in sorted(v_op1.iteritems()):
                    by_operands_dict_parts.append("                {}: [".format(k_op2))
                    for data in sorted(v_op2):
                        op1_t = data
                        by_operands_dict_parts.append("                    {},".format(data))
                    by_operands_dict_parts.append("                ],")
                by_operands_dict_parts.append("            },")
        by_operands_dict_parts.append("        },")
    by_operands_dict_parts.append("    },")
by_operands_dict_parts.append("}")


###
# Compose a dict that returns a list with all the possible combinations of the operands types based on the return type
###
by_return_dict_parts = []
by_return_dict_parts.append("{")
for k_arity, v_arity in sorted(by_return.iteritems()):
    by_return_dict_parts.append("    {}: {{".format(k_arity))
    for k_operator, v_operator in sorted(v_arity.iteritems()):
        by_return_dict_parts.append("        '{}': {{".format(k_operator))
        for k_return, v_return in sorted(v_operator.iteritems()):
            by_return_dict_parts.append("            {}: [".format(k_return))
            for data in sorted(v_return):
                if k_arity == 1:
                    op1_t = data
                    by_return_dict_parts.append("                {},".format(data))
                else:
                    op1_t, op2_t = data
                    by_return_dict_parts.append("                ({}, {}),".format(op1_t, op2_t))
            by_return_dict_parts.append("            ],")
        by_return_dict_parts.append("        },")
    by_return_dict_parts.append("    },")
by_return_dict_parts.append("}")


with open("./operators_types.py", "w") as f:
    f.write("""# -*- coding: utf-8 -*-

# WARNING: This file has been generated with
#    {program}


{type_imports}

###
# By operand types
###

by_operands = {by_operands}

###
# By return type
###

by_return = {by_return}
""".format(
        program=os.path.abspath(__file__),
        type_imports="\n".join("from ast import " + cls for cls in sorted(set(types))),
        by_operands="\n".join(by_operands_dict_parts),
        by_return="\n".join(by_return_dict_parts),
    ))

def compose_ops(ops):
    if ops:
        ops = list(sorted(ops))
        amount_ops = len(ops)
        pairs = [(op, "fr('1/{}')".format(amount_ops)) for op in ops]
        return "\n  " + ",\n  ".join('{}: {}'.format(op, prob) for op, prob in pairs) + "\n"
    else:
        return ""


available_common_operators_parts = []
for ret_t in sorted(types):
    type_ops = []
    for arity in range(1, 4):
        if arity == 3:
            # Filter types
            # XXX: If you want to exclude the Int generation, don't allow ternary operator because it uses Int in the first operand
            # ops = ""
            type_ops += [(str("?:"), 3)]
        elif arity not in available_common_operators or ret_t not in available_common_operators[arity]:
            type_ops += []
        else:
            type_ops += [(str(op), arity) for op in available_common_operators[arity][ret_t]]
    ret_t = camel_case_to_snake_case(ret_t)
    available_common_operators_parts.append("{}_normal_operators = {{{}}}".format(ret_t, compose_ops(type_ops)))
    available_common_operators_parts.append("if {}_normal_operators:".format(ret_t))
    available_common_operators_parts.append("  assert sum({}_normal_operators.values()) == 1".format(ret_t))
    available_common_operators_parts.append("")

available_assignment_operators_parts = []
for ret_t in sorted(types):
    arity = 2
    if arity not in available_common_operators or ret_t not in available_common_operators[arity]:
        ops = []
    else:
        ops = []
        for op in sorted(available_common_operators[arity][ret_t]):
            op += "="
            if op in ['+=', '-=', '*=', '/=', '%=', '&=', '|=', '^=', '<<=', '>>=']:
                ops.append((str(op), 2))
    ret_t = camel_case_to_snake_case(ret_t)
    available_assignment_operators_parts.append("{}_assignment_operators = {{{}}}".format(ret_t, compose_ops(ops)))
    available_assignment_operators_parts.append("if {}_assignment_operators:".format(ret_t))
    available_assignment_operators_parts.append("  assert sum({}_assignment_operators.values()) == 1".format(ret_t))
    available_assignment_operators_parts.append("")

available_lvalue_parts = []
for ret_t in sorted(types):
    type_ops = []
    for arity in range(1, 3):
        type_ops += [(str(op), arity) for op in available_lvalue_operators[arity][ret_t]]
    ret_t = camel_case_to_snake_case(ret_t)
    available_lvalue_parts.append("{}_lvalue_operators = {{{}}}".format(ret_t, compose_ops(type_ops)))
    available_lvalue_parts.append("if {}_lvalue_operators:".format(ret_t))
    available_lvalue_parts.append("  assert sum({}_lvalue_operators.values()) == 1".format(ret_t))
    available_lvalue_parts.append("")


with open("./operators.py", "w") as f:
    f.write("""# -*- coding: utf-8 -*-

# WARNING: This file has been generated with
#    {program}
# WARNING: This operators define the way expressions are built. You can modify then to change the way expressions are
# created. DO NOT change their names, since a naming convention is used.

from fractions import Fraction as fr

###
# Lvalue operators
###

{lvalue}

###
# Complex assignment operators
###

{assignment}

###
# Normal operators
###

{operators}
""".format(
        program=os.path.abspath(__file__),
        lvalue="\n".join(available_lvalue_parts),
        assignment="\n".join(available_assignment_operators_parts),
        operators="\n".join(available_common_operators_parts)
    ))
