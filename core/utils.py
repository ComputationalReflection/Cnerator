#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
Different general-purpose functions used in the implementation of the core library.
"""

import re
import sys

from params.parameters import get_app_args


def camel_case_to_snake_case(name: str) -> str:
    """Converts a camel-case string into its snake-case representation"""
    s1 = re.sub(r'(.)([A-Z][a-z]+)', r'\1_\2', name)
    return re.sub(r'([a-z0-9])([A-Z])', r'\1_\2', s1).lower()


def print_to_std_error(*args, sep=' ', end='\n'):
    """This function wraps the print Python function to show something in the
    standard output error"""
    print(*args, sep=sep, end=end, file=sys.stderr)


def print_if_verbose(*args, sep=' ', end='\n', file=None):
    """Prints a message if the verbose option has been passed to the application"""
    if get_app_args().verbose:
        print(*args, sep=sep, end=end, file=file)
