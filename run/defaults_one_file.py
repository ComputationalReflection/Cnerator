#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
Example execution of Cnerator passing no parameters but generation in one file (``-n 1``).
"""

import sys
import cnerator

VERBOSE = True

if __name__ == "__main__":
    sys.argv.append('-O')      # generate output files in ../out
    sys.argv.append('../out')  # generate output files in ../out
    sys.argv.append('-n')      # generate all the code in one file
    sys.argv.append('1')       # generate all the code in one file
    if VERBOSE:
        sys.argv.append("-v")
    cnerator.main()
