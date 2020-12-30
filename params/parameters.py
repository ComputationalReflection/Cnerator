import argparse
import json
from typing import List, Dict
from params.epilog import build_epilog


def get_app_args():
    global __ARGS
    return __ARGS



def parse_args():
    parser = argparse.ArgumentParser(description='Generates a compilable C program', epilog=build_epilog(),
                                     formatter_class=argparse.RawDescriptionHelpFormatter)
    parser.add_argument("-O", "--output_dir", metavar="PATH", default="out",
                        help="Output directory (default: %(default)s)")
    parser.add_argument("-o", "--output", metavar="NAME", default="main",
                        help="C output file name, without the .c extension (default: %(default)s)")
    parser.add_argument("-p", "--parts", metavar="NUMBER", type=int, default=2,
                        help="Split the program in different C files (default: %(default)s)")
    parser.add_argument("-r", "--recursion", metavar="RECURSION_LIMIT", type=int, default=50000,
                        help="Python recursion limit (default: %(default)s)")
    parser.add_argument("-f", "--functions", metavar="FUNCTIONS", default="",
                        help="json file specifying conditions of the functions to be created"                            
                             "(e.g., json/1-function-each-type-10-total.json)")
    parser.add_argument("-V", "--visitors", metavar="VISITORS", default="",
                        help="Semicolon-separated list of visitors, in order "
                             "(e.g., visitors.func_to_proc;visitors.return_instrumentation)")
    parser.add_argument("-v", "--verbose", action="store_true",
                        help="Verbose messages (default: %(default)s)")
    parser.add_argument("-d", "--debug", action="store_true",
                        help="Generate debug info (call graph and struct structure) in .dot files "
                             "(default: %(default)s)")
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
        import cnerator
        cnerator.utils.print_to_std_error(f"Error parsing -vst param ({vst_param}).\n"
                           f"Exception message: {error}.\n"
                           f"Example format visitors.func_to_proc;visitors.return_instrumentation.")
    return list()


def parse_function_specification_json_file(file_name: str) -> Dict[str, Dict]:
    """Parses a json file with function specifications and returns a valid representation"""
    import cnerator
    global_variables = {"cnerator": cnerator}
    with open(file_name) as json_file:
        data = json.load(json_file)
        for key, content in data.items():
            lambda_function = eval(content["condition"], global_variables)
            content["condition"] = lambda_function
    return data
