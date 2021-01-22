#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
Program representations (ASTs) in Cnerator can be processed / modified before the final generation
of C source code. In order to do that, an introspective instance of the Visitor design pattern can be provided.
If so, the ``-V`` or ``-Visitors`` options should be passed, including and ordered collection of visitors.
In this package you can find different Visitor implementations.
"""

