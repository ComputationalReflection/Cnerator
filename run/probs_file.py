#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
Example execution of Cnerator specifying probabilities in a json file (``example_probs.json``).
Run it from the parent folder with ``python -m run.probs_file``.
"""

import sys
import cnerator

VERBOSE = True

if __name__ == "__main__":
    sys.argv.append('-O')      # generate output files in ../out
    sys.argv.append('out')  # generate output files in ../out
    sys.argv.append('-P')      # set different probabilities with a specification file
    sys.argv.append('json/probabilities/example_probs.json')  # set different probabilities with a specification file
    if VERBOSE:
        sys.argv.append("-v")
    cnerator.main()
