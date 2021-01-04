#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
Example execution of Cnerator passing no parameters.
It creates a random program considering the default probabilities.
"""

import sys

VERBOSE = True

if __name__ == "__main__":
    sys.argv.append('-O../out')  # generate output files in ../out
    if VERBOSE:
        sys.argv.append("-v")
    print(sys.argv)
    exec(open("../cnerator.py").read())
