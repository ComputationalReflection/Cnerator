#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
This is the entry point to the Cnerator source code generation tool.
The main function runs Cnerator.
To see the different arguments provided, run Cnerator with either ``-h`` or ``--help`` command line arguments.
"""

from __future__ import print_function

import os
import sys

from debug import call_inspector, structure_inspector
from params import parameters
from params.parameters import parse_args, get_modules_to_import, get_probs_to_override
from params.writter import write_in_files
from params import json_probs
import core


def run(args):
    """
    This function runs Cnerator, receiving the command line arguments.

    :param args: The command line arguments returned by ``argparse.ArgumentParser.parse_args``.
    :return: None.
    """
    # Set the recursion limit
    sys.setrecursionlimit(args.recursion)

    # Get the probabilities from the command line arguments and modify the default ones
    core.probs.set_probabilities(get_probs_to_override(args.probs))
    if args.probsfile:
        from core import probs
        probabilities = json_probs.parse_probabilities_specification_json_file(args.probsfile)
        probs.set_probabilities(probabilities)

    # Process the json file to create functions, or generates a program using the probabilities defined
    if args.functions:  # if a json file was passed, it defines the functions to be generated
        dictionary = parameters.parse_function_specification_json_file(args.functions)
        program = core.generators.generate_program_with_function_distribution(dictionary, args, remove_unwanted_functions=True)
    else:  # otherwise, a random program is generated, considering the specified probabilities
        program = core.generators.generate_program()

    # Load all the visitor modules and run them, in the same order as specified by the user
    modules = get_modules_to_import(args.visitors)
    for module in modules:
        module.visit(program)

    # Create output directory
    if not os.path.isdir(args.output_dir):
        os.mkdir(args.output_dir)

    # Write code to files
    write_in_files(program, args)

    # Write debug graph information
    if args.debug:
        # Write structure graph
        structure_inspector.write_graph(program, os.path.join(args.output_dir, args.output + ".structure.dot"))
        # Write call graph
        call_inspector.write_graph(program, True, os.path.join(args.output_dir, args.output + ".call.dot"))
        call_inspector.write_graph(program, False, os.path.join(args.output_dir, args.output + ".call_light.dot"))


def main():
    """Main function.
    To see the different arguments provided, run Cnerator with either ``-h`` or ``--help`` command line arguments.
    """
    exit(run(parse_args()))


if __name__ == "__main__":
    main()


