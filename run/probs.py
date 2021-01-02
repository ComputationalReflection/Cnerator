#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
Example execution of Cnerator passing the --p parameter.
"""

import sys

if __name__ == "__main__":
    sys.argv.append('-O../out')  # generate output files in ../out
    sys.argv.append('-p')
    sys.argv.append('call_prob={True:0.1,False: 0.9};param_number_prob={0:0.2,1:0.3,2:0.3,3:0.2}')
    print(sys.argv)
    exec(open("../cnerator.py").read())
