import argparse
from typing import List

import cnerator


def get_app_args():
    global __ARGS
    return __ARGS



def parse_args():
    parser = argparse.ArgumentParser(description='Generates a compilable C program')
    parser.add_argument("-w", "--working-dir", metavar="PATH", default="out",
                        help="Working directory (default: %(default)s)")
    parser.add_argument("-o", "--output", metavar="NAME", default="main",
                        help="C output file name, without the .c extension (default: %(default)s)")
    parser.add_argument("-p", "--parts", metavar="AMOUNT", type=int, default=2,
                        help="Split the program in different C files (default: %(default)s)")
    parser.add_argument("-r", "--recursion", metavar="RECURSION", type=int, default=50000,
                        help="Python recursion limit (default: %(default)s)")
    parser.add_argument("-vst", "--visitors", metavar="VISITORS", default="",
                        help="Semicolon-separated list of visitors, in order "
                             "(e.g., visitors.func_to_proc;visitors.return_instrumentation) (default: %(default)s)")
    parser.add_argument("-v", "--verbose", action="store_true",
                        help="Verbose messages (default: %(default)s)")
    global __ARGS
    __ARGS = parser.parse_args()
    return __ARGS



def get_modules_to_import(vst_param: str) -> List:
    import importlib
    params = vst_param.split(";")
    try:
        modules = [importlib.import_module(visitor_module_name) for visitor_module_name in params
                    if len(visitor_module_name.replace(" ", "")) > 0]
        return modules
    except Exception as error:
        cnerator.utils.print_to_std_error(f"Error parsing -vst param ({vst_param}).\n"
                           f"Exception message: {error}.\n"
                           f"Example format visitors.func_to_proc;visitors.return_instrumentation.")
    return list()
