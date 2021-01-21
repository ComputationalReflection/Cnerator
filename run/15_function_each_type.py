#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
Example execution of Cnerator to create a particular number of functions.
It creates a program using the 15-function-each-type.json file, running different visitors.
"""

import sys
import cnerator

VERBOSE = True

if __name__ == "__main__":
    sys.argv.append('-O')      # generate output files in ../out
    sys.argv.append('../out')  # generate output files in ../out
    sys.argv.append('-f')      # controlled function generation
    sys.argv.append('../json/functions/15-function-each-type.json')  # controlled function generation
    sys.argv.append('-V')      # visitor post-processing
    sys.argv.append('visitors.func_to_proc:visitors.return_instrumentation:visitors.fix_ptr_literal')
    if VERBOSE:
        sys.argv.append("-v")
    cnerator.main()
