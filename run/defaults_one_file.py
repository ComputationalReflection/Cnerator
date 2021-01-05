#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
Example execution of Cnerator passing no parameters but generation in one file ().
"""

import sys

VERBOSE = True

if __name__ == "__main__":
    sys.argv.append('-O../out')  # generate output files in ../out
    sys.argv.append('-n1')  # generate all the code in one file
    if VERBOSE:
        sys.argv.append("-v")
    print(sys.argv)
    exec(open("../cnerator.py").read())
