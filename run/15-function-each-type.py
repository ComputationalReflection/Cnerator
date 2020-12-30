#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
Example execution of Cnerator to create a particular number of functions.
It creates a program using the 15-function-each-type.json file, running different visitors.
"""

import sys

VERBOSE = True

if __name__ == "__main__":
    sys.argv.append('-O../out')  # generate output files in ../out
    sys.argv.append('-f../json/15-function-each-type.json')
    sys.argv.append('-Vvisitors.func_to_proc;visitors.return_instrumentation;visitors.fix_ptr_literal')
    if VERBOSE:
        sys.argv.append("-v")
    print(sys.argv)
    exec(open("../cnerator.py").read())
