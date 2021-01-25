#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
Example execution of Cnerator passing the ``--help`` parameter.
Run it from the parent folder with ``python -m run.help``.
"""

import sys
import cnerator

if __name__ == "__main__":
    sys.argv.append('-h')  # generate output files in ../out
    cnerator.main()
