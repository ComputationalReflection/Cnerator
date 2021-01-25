#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
Example execution of Cnerator to create particular functions.
It creates a program using the ``article.json`` file, running different visitors.
Run it from the parent folder with ``python -m run.article``.
"""

import cnerator
import sys

VERBOSE = True

if __name__ == "__main__":
    sys.argv.append('-O')      # generate output files in ../out
    sys.argv.append('out')  # generate output files in ../out
    sys.argv.append('-f')      # controlled function generation
    sys.argv.append('json/functions/article.json')  # controlled function generation
    sys.argv.append('-V')      # visitor post-processing
    sys.argv.append('visitors.return_instrumentation:visitors.fix_ptr_literal')  # visitor post-processing
    sys.argv.append('-P')      # probabilities file
    sys.argv.append('json/probabilities/article.json')  # probabilities file
    sys.argv.append('-n')      # generate all the code in one file
    sys.argv.append('1')       # generate all the code in one file
    if VERBOSE:
        sys.argv.append("-v")
    cnerator.main()
