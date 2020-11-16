#! /usr/bin/env python
# -*- coding: utf-8 -*-

from __future__ import unicode_literals
from __future__ import print_function
from __future__ import division
from __future__ import absolute_import

import random
import os
import errno


c_prefix = """// -*- coding: utf-8; mode: c; -*-

#include <stdio.h>
#include <stdbool.h>



typedef struct {
    int x;
    int y;
} struct1_t;

typedef struct {
    int x;
    int y;
    int z;
} struct2_t;




int main(void)
{
"""

c_suffix = """
    return 0;
}
"""

operations = [
    ("add", "{} + {}", 2),
    ("sub", "{} - {}", 2),
    ("plus", "+ {}", 1),
    ("minus", "- {}", 1),
    ("mul", "{} * {}", 2),
    ("div", "{} / {}", 2),
    ("mod", "{} % {}", 2),
    ("incBefore", "++ {}", 1),
    ("decBefore", "-- {}", 1),
    ("incAfter", "{} ++", 1),
    ("decAfter", "{} --", 1),

    ("eq", "{} == {}", 2),
    ("ne", "{} != {}", 2),
    ("gt", "{} > {}", 2),
    ("lt", "{} < {}", 2),
    ("ge", "{} >= {}", 2),
    ("le", "{} <= {}", 2),

    ("logicNot", "! {}", 1),
    ("logicAnd", "{} && {}", 2),
    ("logicOr", "{} || {}", 2),

    ("not", "~ {}", 1),
    ("and", "{} & {}", 2),
    ("or", "{} | {}", 2),
    ("xor", "{} ^ {}", 2),
    ("shl", "{} << {}", 2),
    ("shr", "{} >> {}", 2),

    ("addAssign", "+= {}", 1),
    ("subAssign", "-= {}", 1),
    ("mulAssign", "*= {}", 1),
    ("divAssign", "/= {}", 1),
    ("modAssign", "%= {}", 1),
    ("andAssign", "&= {}", 1),
    ("orAssign", "|= {}", 1),
    ("xorAssign", "^= {}", 1),
    ("shlAssign", "<<= {}", 1),
    ("shrAssign", ">>= {}", 1),

    ("cast", "(({}) {})", 1),
]



variables = [
    ("bool",                    "b",                "true"),
    ("unsigned char",           "uc",               "'B'"),
    ("signed char",             "sc",               "'C'"),
    ("unsigned short int",      "uSi",              "1"),
    ("signed short int",        "sSi",              "2"),
    ("unsigned int",            "ui",               "3"),
    ("signed int",              "si",               "4"),
    ("unsigned long int",       "uLi",              "5"),
    ("signed long int",         "sLi",              "6"),
    ("unsigned long long int",  "uLLi",             "7"),
    ("signed long long int",    "sLLi",             "8"),
    ("float",                   "f",                "0.1f"),
    ("double",                  "d",                "0.2"),
    ("long double",             "Ld",               "0.3"),
    
    ("int []",                  "ai",               "{1, 2, 3}"),
    ("double []",               "ad",               "{0.1, 0.2, 0.3}"),
    
    ("struct1_t",               "struct$si$si",     "{0, 0}"),
    ("struct2_t",               "struct$si$si$si",  "{0, 0, 0}"),

    ("char *",                  "pc",               "NULL"),
    ("short int *",             "pSi",              "NULL"),
    ("int *",                   "pi",               "NULL"),
    ("long int *",              "pLi",              "NULL"),
    ("long long int *",         "pLLi",             "NULL"),
    ("float *",                 "pf",               "NULL"),
    ("double *",                "pd",               "NULL"),
    ("long double *",           "pLd",              "NULL"),
    ("int (*)[]",               "pai",              "NULL"),
    ("double (*)[]",            "pad",              "NULL"),
    ("struct1_t *",             "pstruct$si$si",    "NULL"),
    ("struct2_t *",             "pstruct$si$si$si", "NULL"),
]


def var_expression(position, name):
    return "{}_{}".format(name, position)


def var_declaration(type, name, position, value):
    if type.endswith(")[]"):
        return "    {} {}_{})[] = {};\n".format(type[:-3], name, position, value)
    if type.endswith("[]"):
        return "    {} {}_{}[] = {};\n".format(type[:-3], name, position, value)
    return "    {} {}_{} = {};\n".format(type, name, position, value)


def main():

    for op, pattern, size in operations:
        with open("op_{}.c".format(op), "w") as f:
            f.write(c_prefix)
            for type, name, value in variables:
                f.write(var_declaration(type, name, 0, value))
                f.write(var_declaration(type, name, 1, value))
                f.write(var_declaration(type, name, 2, value))
            f.write("\n\n")
            if size != 1:
                for typeR, nameR, valueR in variables:
                    for type1, name1, value1 in variables:
                        for type2, name2, value2 in variables:
                            f.write("    {} = {};\n".format(var_expression(0, nameR), pattern.format(var_expression(1, name1), var_expression(2, name2))))
            else:
                for typeR, nameR, valueR in variables:
                    for type1, name1, value1 in variables:
                        if op == "cast":
                            f.write("    {} = {};\n".format(var_expression(0, nameR), pattern.format(typeR, var_expression(1, name1))))
                        elif op.endswith("Assign"):
                            f.write("    {} {};\n".format(var_expression(0, nameR), pattern.format(var_expression(1, name1))))
                        else:
                            f.write("    {} = {};\n".format(var_expression(0, nameR), pattern.format(var_expression(1, name1))))
            f.write(c_suffix)


if __name__ == "__main__":
    main()