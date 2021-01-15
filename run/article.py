#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
Example execution of Cnerator to create particular functions.
It creates a program using the 1-function-each-type-10.json file, running different visitors.
"""

import sys

VERBOSE = True

if __name__ == "__main__":
    sys.argv.append('-O../out')  # generate output files in ../out
    sys.argv.append('-f../json/functions/article.json')
    sys.argv.append('-Vvisitors.return_instrumentation;visitors.fix_ptr_literal')
    sys.argv.append('-P../json/probabilities/article.json')
    sys.argv.append('-n1')  # generate all the code in one file
    if VERBOSE:
        sys.argv.append("-v")
    print(sys.argv)
    exec(open("../cnerator.py").read())
