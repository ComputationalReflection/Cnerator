#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
Example execution of Cnerator passing the --help parameter.
"""

import sys

if __name__ == "__main__":
    sys.argv.append('-h')  # generate output files in ../out
    print(sys.argv)
    exec(open("../cnerator.py").read())
