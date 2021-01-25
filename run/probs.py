#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
Example execution of Cnerator passing the ``-p`` parameter to specify the probabilities of two language constructs.
Run it from the parent folder with ``python -m run.probs``.
"""

import sys
import cnerator

if __name__ == "__main__":
    sys.argv.append('-O')      # generate output files in ../out
    sys.argv.append('out')  # generate output files in ../out
    sys.argv.append('-p')      # set the value of two probabilities
    sys.argv.append('call_prob={True:0.1,False: 0.9};param_number_prob={0:0.2,1:0.3,2:0.3,3:0.2}')
    cnerator.main()
