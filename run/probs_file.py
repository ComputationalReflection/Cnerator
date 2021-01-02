#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
Example execution of Cnerator specifying probabilities in a json file.
"""

import sys

VERBOSE = True

if __name__ == "__main__":
    sys.argv.append('-O../out')  # generate output files in ../out
    sys.argv.append('-P../json/probabilities/example_probs.json')
    if VERBOSE:
        sys.argv.append("-v")
    print(sys.argv)
    exec(open("../cnerator.py").read())
