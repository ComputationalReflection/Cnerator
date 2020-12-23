#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
Example execution of Cnerator passing no parameters.
It creates a program using the 1-function-each-type-10-total.json file, running different visitors.
"""

import sys

VERBOSE = True

if __name__ == "__main__":
    sys.argv.append('-O../out')  # generate output files in ../out
    sys.argv.append('-f../json/2000-function-void-no-void.json')
    sys.argv.append('-Vvisitors.func_to_proc;visitors.return_instrumentation;visitors.fix_ptr_literal')
    if VERBOSE:
        sys.argv.append("-v")
    print(sys.argv)
    exec(open("../cnerator.py").read())
