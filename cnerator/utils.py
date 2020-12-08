
import re
import sys

from params.parameters import get_app_args


def camel_case_to_snake_case(name):
    s1 = re.sub(r'(.)([A-Z][a-z]+)', r'\1_\2', name)
    return re.sub(r'([a-z0-9])([A-Z])', r'\1_\2', s1).lower()


def print_to_std_error(*args):
    print(*args, file=sys.stderr)


def print_if_verbose(*args):
    """Prints a message if the verbose option has been passed to the application"""
    if get_app_args().verbose:
        print(*args)
