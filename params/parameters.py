#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
Module where the command line arguments are parsed.
"""

import argparse
import json
import sys
from typing import List, Dict, Union


def get_app_args():
    global __ARGS
    return __ARGS


def parse_args():
    from params.epilog import build_epilog
    parser = argparse.ArgumentParser(description='Generates a compilable C program', epilog=build_epilog(),
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("-O", "--output_dir", metavar="PATH", default="out",
                        help="Output directory (default: %(default)s)")
    parser.add_argument("-o", "--output", metavar="NAME", default="main",
                        help="C output file name, without the .c extension (default: %(default)s)")
    parser.add_argument("-n", "--nfiles", metavar="NUMBER", type=int, default=2,
                        help="Split the program in different C files (default: %(default)s)")
    parser.add_argument("-p", "--probs", metavar="PROBS", default="",
                        help="Semicolon-separated list of probabilities and their values "
                             "(e.g., call_prob={True:0.2,False: 0.8}; param_number_prob={0:0.2,1:0.3,2:0.3,3:0.2})")
    parser.add_argument("-P", "--probsfile", metavar="PROBSFILE", default="",
                        help="json file specifying some probatilities (e.g. json/probabilities/example_probs.json) "
                             "(see json/probabilities/ for examples)")
    parser.add_argument("-r", "--recursion", metavar="RECURSION_LIMIT", type=int, default=50000,
                        help="Python recursion limit (default: %(default)s)")
    parser.add_argument("-f", "--functions", metavar="FUNCTIONS", default="",
                        help="json file specifying conditions of the functions to be created"                            
                             "(e.g., json/functions/1-function-each-type.json)")
    parser.add_argument("-V", "--visitors", metavar="VISITORS", default="",
                        help="Colon-separated list of visitors, in order "
                             "(e.g., visitors.func_to_proc:visitors.return_instrumentation)")
    parser.add_argument("-v", "--verbose", action="store_true",
                        help="Verbose messages (default: %(default)s)")
    parser.add_argument("-d", "--debug", action="store_true",
                        help="Generate debug info (call graph and struct structure) in .dot files "
                             "(default: %(default)s)")
    global __ARGS
    __ARGS = parser.parse_args()
    return __ARGS



def get_modules_to_import(vst_param: str) -> List:
    """Returns the list of visitors to import, given the args.visitors option"""
    import importlib
    params = vst_param.split(":")
    try:
        modules = [importlib.import_module(visitor_module_name) for visitor_module_name in params
                    if len(visitor_module_name.replace(" ", "")) > 0]
        return modules
    except Exception as error:
        import core
        core.utils.print_to_std_error(f"Error parsing the -V param ({vst_param}).\n"
                           f"Exception message: {error}.\n"
                           f"Example format visitors.func_to_proc:visitors.return_instrumentation.")
    return list()


def parse_function_specification_json_file(file_name: str) -> Dict[str, Dict]:
    """Parses a json file with function specifications and returns a valid representation"""
    import core
    from core import ast
    global_variables = {"cnerator": core, "core": core, "ast": ast}
    with open(file_name) as json_file:
        data = json.load(json_file)
        for key, content in data.items():
            lambda_function = eval(content["condition"], global_variables)
            content["condition"] = lambda_function
    return data


def get_probs_to_override(probs_param: str) -> Union[Dict[str, dict], None]:
    """Parses the args.probs parameter and returns the dictionary with their values"""
    if not probs_param:
        return None  # no parameter
    local_dict = dict()
    try:
        exec(probs_param, dict(), local_dict)
    except:
        print(f"Wrong probability format '{probs_param}'.", file=sys.stderr)
        return None  # wrong probability
    result_dict = dict()
    for prob_key, prob_dict in local_dict.items():
        import core
        if not core.probs.does_this_probability_exist(prob_key):
            print(f"Unknown probability '{prob_key}'.", file=sys.stderr)
        elif type(prob_dict) is not dict:
            print(f"The probability value must be a dictionary ({prob_dict} is wrong).", file=sys.stderr)
        else:
            result_dict[prob_key] = prob_dict
    return result_dict


def parse_probabilities_specification_json_file(file_name: str) -> Union[Dict[str, dict], None]:
    """Parses a json file with probabilities specifications and returns a valid representation"""
    import core
    global_variables = {"cnerator": core, "core": core}
    with open(file_name) as json_file:
        data = json.load(json_file)
        for key, content in data.items():
            lambda_function = eval(content["condition"], global_variables)
            content["condition"] = lambda_function
    return data
