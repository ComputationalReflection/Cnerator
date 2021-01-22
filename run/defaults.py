#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
Example execution of Cnerator passing no parameters.
It creates a random program considering the default probabilities.
"""

import sys
import cnerator

VERBOSE = True

if __name__ == "__main__":
    sys.argv.append('-O')      # generate output files in ../out
    sys.argv.append('../out')  # generate output files in ../out
    if VERBOSE:
        sys.argv.append("-v")
    cnerator.main()
