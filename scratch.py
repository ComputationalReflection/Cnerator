import json
import cnerator


def f(param):
    print(type(param))

f(3 for i in range(3))

with open('json/1-function-each-type-10-total.json') as json_file:
    data = json.load(json_file)
    print(data)
    for key, content in data.items():
        lambda_function = eval(content["condition"])
        content["condition"] = lambda_function
    print(data)


    """
    for p in data['people']:
        print('Name: ' + p['name'])
        print('Website: ' + p['website'])
        print('From: ' + p['from'])
        print('')
    """



original_dict = {
        "v_functions": {"total": 1, "condition": lambda f: isinstance(f.return_type, cnerator.ast.Void)},
        "b_functions": {"total": 1, "condition": lambda f: isinstance(f.return_type, cnerator.ast.Bool)},
        "sc_functions": {"total": 1, "condition": lambda f: isinstance(f.return_type, cnerator.ast.SignedChar)},
        "sSi_functions": {"total": 1, "condition": lambda f: isinstance(f.return_type, cnerator.ast.SignedShortInt)},
        "si_functions": {"total": 1, "condition": lambda f: isinstance(f.return_type, cnerator.ast.SignedInt)},
        "sLLi_functions": {"total": 1, "condition": lambda f: isinstance(f.return_type, cnerator.ast.SignedLongLongInt)},
        "f_functions": {"total": 1, "condition": lambda f: isinstance(f.return_type, cnerator.ast.Float)},
        "d_functions": {"total": 1, "condition": lambda f: isinstance(f.return_type, cnerator.ast.Double)},
        "p_functions": {"total": 1, "condition": lambda f: isinstance(f.return_type, cnerator.ast.Pointer)},
        "struct_functions": {"total": 1, "condition": lambda f: isinstance(f.return_type, cnerator.ast.Struct)},
    }