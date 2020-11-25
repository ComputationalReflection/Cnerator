#!/usr/bin/env python
# -*- coding: utf-8 -*-


from __future__ import print_function

import argparse
import io
import os
import sys

import call_inspector
import cnerator
import fix_ptr_literal
import return_instrumentator
import structure_inspector

sys.setrecursionlimit(50000)


DEFAULT_OUTPUT_DIR = "out"

def parse_args():
    parser = argparse.ArgumentParser(description='Compose a compilable C program')
    parser.add_argument("-w", "--working-dir", metavar="PATH",
                        help="Working directory")
    parser.add_argument("-o", "--output", metavar="NAME", default="main",
                        help="C file name without extension (default: %(default)s)")
    parser.add_argument("-p", "--parts", metavar="AMOUNT", type=int, default=4,
                        help="Split the program in different C files (default: %(default)s)")
    args = parser.parse_args()

    #  Create output directory
    if not args.working_dir:
        args.working_dir = DEFAULT_OUTPUT_DIR
    if not os.path.isdir(args.working_dir):
        os.mkdir(args.working_dir)
    return args


def write_in_multiple_headers(program, args):
    includes, defines, structs, prototypes, global_vars, functions, main = program.stringify_parts()

    functions = replace_code(functions)
    main = replace_code(main)

    # Write main file
    main_file = [
        includes, "\n", "\n",
        defines, "\n", "\n",
    ]
    if structs:
        main_file.append('#include "structs.h"\n')
    main_file.extend([
        '#include "prototypes.h"\n',
        '#include "global_vars.h"\n',
        "/*\n"
        " * TOTAL functions:   {} + 1\n".format(len(program.functions)),
        " * VOID functions:    {}\n".format(sum(1 for f in program.functions if f.return_type == cnerator.ast.Void())),
        " * NO VOID functions: {} + 1\n".format(sum(1 for f in program.functions if f.return_type != cnerator.ast.Void())),
        " */\n"
        '#include "functions.h"\n',
        "\n", main, "\n",
    ])
    file_path = os.path.join(args.working_dir, args.output + ".c")
    with io.open(file_path, mode="w", encoding="utf-8") as f:
        f.write("".join(main_file))

    # Write structs file
    if structs:
        structs_file = [
            "#ifndef __structs_h__\n",
            "#define __structs_h__\n\n\n\n",
            structs,
            "\n\n\n\n#endif\n"
        ]
        file_path = os.path.join(args.working_dir, "structs.h")
        with io.open(file_path, mode="w", encoding="utf-8") as f:
            f.write("".join(structs_file))

    # Write prototypes file
    prototypes_file = [
        "#ifndef __prototypes_h__\n",
        "#define __prototypes_h__\n\n\n\n",
        prototypes,
        "\n\n\n\n#endif\n"
    ]
    file_path = os.path.join(args.working_dir, "prototypes.h")
    with io.open(file_path, mode="w", encoding="utf-8") as f:
        f.write("".join(prototypes_file))

    # Write global_vars file
    global_vars_file = [
        "#ifndef __global_vars_h__\n",
        "#define __global_vars_h__\n\n\n\n",
        global_vars,
        "\n\n\n\n#endif\n"
    ]
    file_path = os.path.join(args.working_dir, "global_vars.h")
    with io.open(file_path, mode="w", encoding="utf-8") as f:
        f.write("".join(global_vars_file))

    # Write functions file
    functions_file = [
        "#ifndef __functions_h__\n",
        "#define __functions_h__\n\n\n\n",
        functions,
        "\n\n\n\n#endif\n"
    ]
    file_path = os.path.join(args.working_dir, "functions.h")
    with io.open(file_path, mode="w", encoding="utf-8") as f:
        f.write("".join(functions_file))


def split_in_similar_parts(seq, amount):
    avg = len(seq) / float(amount)
    last = 0.0
    for i in range(amount):
        b = int(last)
        e = int(last + avg)
        if i == amount -1:
            e = None
        yield seq[b:e]
        last += avg


def write_in_multiple_files(program, args):
    includes, defines, structs, prototypes, global_vars, _, main = program.stringify_parts()
    functions_parts = split_in_similar_parts(program.functions, args.parts)

    print("")
    print("*" * 80)
    print("* WRITING IN FILES")
    print("*" * 80)
    print("Global: {} total functions".format(len(program.functions)))


    main = replace_code(main)
    global_vars = "\n".join("static " + line for line in global_vars.splitlines())

    # Write main file
    main_file = [
        includes, "\n", "\n",
        defines, "\n", "\n",
    ]
    if structs:
        main_file.append('#include "structs.h"\n')
    main_file.extend([
        '#include "prototypes.h"\n',
        '#include "global_vars.h"\n',
        "\n",
        "/*\n",
        " * TOTAL functions:   {} + 1\n".format(len(program.functions)),
        " * VOID functions:    {}\n".format(sum(1 for f in program.functions if f.return_type == cnerator.ast.Void())),
        " * NO VOID functions: {} + 1\n".format(sum(1 for f in program.functions if f.return_type != cnerator.ast.Void())),
        " */\n",
        "\n", main, "\n",
    ])
    file_path = os.path.join(args.working_dir, args.output + ".c")
    with io.open(file_path, mode="w", encoding="utf-8") as f:
        f.write("".join(main_file))

    # Write structs file
    if structs:
        structs_file = [
            "#ifndef __structs_h__\n",
            "#define __structs_h__\n\n\n\n",
            structs,
            "\n\n\n\n#endif\n"
        ]
        file_path = os.path.join(args.working_dir, "structs.h")
        with io.open(file_path, mode="w", encoding="utf-8") as f:
            f.write("".join(structs_file))

    # Write prototypes file
    prototypes_file = [
        "#ifndef __prototypes_h__\n",
        "#define __prototypes_h__\n\n\n\n",
        prototypes,
        "\n\n\n\n#endif\n"
    ]
    file_path = os.path.join(args.working_dir, "prototypes.h")
    with io.open(file_path, mode="w", encoding="utf-8") as f:
        f.write("".join(prototypes_file))

    # Write global_vars file
    global_vars_file = [
        "#ifndef __global_vars_h__\n",
        "#define __global_vars_h__\n\n\n\n",
        global_vars,
        "\n\n\n\n#endif\n"
    ]
    file_path = os.path.join(args.working_dir, "global_vars.h")
    with io.open(file_path, mode="w", encoding="utf-8") as f:
        f.write("".join(global_vars_file))

    # Write functions file
    for i, part in enumerate(functions_parts):
        print("Part {}: {} total functions.".format(i+1, len(part)))

        functions = "".join(str(func) for func in part)
        functions = replace_code(functions)

        functions_file = [
            includes, "\n", "\n",
            defines, "\n", "\n",
        ]
        if structs:
            functions_file.append('#include "structs.h"\n')
        functions_file.extend([
            '#include "prototypes.h"\n',
            '#include "global_vars.h"\n',
            "\n",
            "/*\n",
            " * TOTAL functions:   {}\n".format(len(part)),
            " * VOID functions:    {}\n".format(
                sum(1 for f in part if f.return_type == cnerator.ast.Void())),
            " * NO VOID functions: {}\n".format(
                sum(1 for f in part if f.return_type != cnerator.ast.Void())),
            " */\n",
            "\n", functions, "\n",
        ])

        file_path = os.path.join(args.working_dir, "functions_{}.c".format(i+1))
        with io.open(file_path, mode="w", encoding="utf-8") as f:
            f.write("".join(functions_file))


def write_in_one_file(program, args):
    code = replace_code(str(program))

    # Write code to main file
    file_path = os.path.join(args.working_dir, args.output + ".c")
    with io.open(file_path, mode="w", encoding="utf-8") as f:
        f.write(code)


def replace_code(code):
    return (code.replace("/ (false)", "/ (true)")
        .replace("% (false)", "% (true)")
        .replace("/ (0)", "/ (1)")
        .replace("% (0)", "% (1)"))


def run(args):

    # return_instrumentator.monkey_path()
    # program = cnerator.generators.generate_program()


    ###
    # 3k (ALL - NORMAL)
    ###
    # program = cnerator.generators.generate_program_with_distribution({
    #     "v_functions": {"total": 300, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.Void)},
    #     "b_functions": {"total": 300, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.Bool)},
    #     "sc_functions": {"total": 300, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.SignedChar)},
    #     "sSi_functions": {"total": 300, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.SignedShortInt)},
    #     "si_functions": {"total": 300, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.SignedInt)},
    #     "sLLi_functions": {"total": 300, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.SignedLongLongInt)},
    #     "f_functions": {"total": 300, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.Float)},
    #     "d_functions": {"total": 300, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.Double)},
    #     "p_functions": {"total": 300, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.Pointer)},
    #     "struct_functions": {"total": 300, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.Struct)},
    # }, 300*10, remove_outsiders=True)

    ###
    # 0.15k (ALL - SNOWMAN)
    ###
    # program = cnerator.generators.generate_program_with_distribution({
    #     "v_functions": {"total": 15, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.Void)},
    #     "b_functions": {"total": 15, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.Bool)},
    #     "sc_functions": {"total": 15, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.SignedChar)},
    #     "sSi_functions": {"total": 15, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.SignedShortInt)},
    #     "si_functions": {"total": 15, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.SignedInt)},
    #     "sLLi_functions": {"total": 15, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.SignedLongLongInt)},
    #     "f_functions": {"total": 15, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.Float)},
    #     "d_functions": {"total": 15, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.Double)},
    #     "p_functions": {"total": 15, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.Pointer)},
    #     "struct_functions": {"total": 15, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.Struct)},
    # }, 15*10, remove_outsiders=True)

    ###
    # FUNCTION vs PROCEDURE, 4k functions
    ###
    # program = cnerator.generators.generate_program_with_distribution({
    #     "procedures": {"total": 2000, "cmp": lambda f: f.return_type == cnerator.ast.Void()},
    #     "functions":  {"total": 2000, "cmp": lambda f: f.return_type != cnerator.ast.Void()},
    # }, 4000, remove_outsiders=False)

    ###
    # 3k (SIZE - NORMAL)
    ###
    # program = cnerator.generators.generate_program_with_distribution({
    #     "v_functions": {"total": 429, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.Void)},
    #     "b_functions": {"total": 215, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.Bool)},
    #     "sc_functions": {"total": 214, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.SignedChar)},
    #     "sSi_functions": {"total": 428, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.SignedShortInt)},
    #     "si_functions": {"total": 142, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.SignedInt)},
    #     "sLLi_functions": {"total": 428, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.SignedLongLongInt)},
    #     "f_functions": {"total": 429, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.Float)},
    #     "d_functions": {"total": 429, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.Double)},
    #     "p_functions": {"total": 143, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.Pointer)},
    #     "struct_functions": {"total": 143, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.Struct)},
    # }, 3000, remove_outsiders=True)

    ###
    # 0.15k (SIZE - SNOWMAN)
    ###
    # program = cnerator.generators.generate_program_with_distribution({
    #     "v_functions": {"total": 22, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.Void)},
    #     "b_functions": {"total": 11, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.Bool)},
    #     "sc_functions": {"total": 10, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.SignedChar)},
    #     "sSi_functions": {"total": 21, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.SignedShortInt)},
    #     "si_functions": {"total": 7, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.SignedInt)},
    #     "sLLi_functions": {"total": 21, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.SignedLongLongInt)},
    #     "f_functions": {"total": 22, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.Float)},
    #     "d_functions": {"total": 22, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.Double)},
    #     "p_functions": {"total": 7, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.Pointer)},
    #     "struct_functions": {"total": 7, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.Struct)},
    # }, 150, remove_outsiders=True)

    ###
    # 10 (SIZE - NORMAL)
    ###
    program = cnerator.generators.generate_program_with_distribution({
        "v_functions": {"total": 1, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.Void)},
        "b_functions": {"total": 1, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.Bool)},
        "sc_functions": {"total": 1, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.SignedChar)},
        "sSi_functions": {"total": 1, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.SignedShortInt)},
        "si_functions": {"total": 1, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.SignedInt)},
        "sLLi_functions": {"total": 1, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.SignedLongLongInt)},
        "f_functions": {"total": 1, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.Float)},
        "d_functions": {"total": 1, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.Double)},
        "p_functions": {"total": 1, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.Pointer)},
        "struct_functions": {"total": 1, "cmp": lambda f: isinstance(f.return_type, cnerator.ast.Struct)},
    }, 10, remove_outsiders=True)


    # [DEBUG]

    # import cnerator.ast as ast
    # import cnerator.type_inference as type_inference
    # import cnerator.generators as generators


    # person_struct = Struct("person",
    #                        ["xyz", Array(LongDouble(), 3)],
    #                        ["age", UnsignedInt()],
    #                        ["is_man", Bool()],
    #                 )
    # person_struct.add_field("next", Pointer(person_struct))
    # person_struct.add_field("parents", Array(Pointer(person_struct), 2))
    # person_struct.add_field("fake_argc", Pointer(Array(SignedChar())))
    # person_struct.add_field("argc1", Pointer(Pointer(SignedChar())))
    # person_struct.add_field("argc2", Array(Pointer(SignedChar()), pointer_literal=True))
    # self.structs.append(person_struct)
    # self.global_vars[person_struct] = [person_struct.generate_literal(), person_struct.generate_literal()]

    # Some global vars

    # t1 = ast.Array(ast.Pointer(ast.Array(ast.UnsignedChar(), 2)), 3)
    # program.global_vars[t1.name] = [(t1, t1.generate_literal(from_declaration=True))]
    #
    # t2 = ast.Pointer(ast.Array(ast.Array(ast.UnsignedChar(), 2), 3))
    # program.global_vars[t2.name] = [(t2, t2.generate_literal(from_declaration=True))]
    #
    # t3 = ast.Array(ast.Array(ast.Pointer(ast.UnsignedChar()), 2), 3)
    # program.global_vars[t3.name] = [(t3, t3.generate_literal(from_declaration=True))]
    #
    # t4 = ast.Array(ast.Array(ast.Array(ast.Bool(), 2), 3), 4, pointer_declaration=True, pointer_literal=True)
    # program.global_vars[t4.name] = [(t4, t4.generate_literal(from_declaration=True))]
    # assert t4.__declaration__(var_name=None, from_return_in_func_decl=True) == "bool * * *"


    # Some statements in Main

    # assignment_type = ast.Double()
    # # Left part
    # var = generators.generate_local_var(program, program.main, assignment_type)
    # left = var
    # # Right part
    # dereference_types = type_inference.infer_operands_type(program, program.main, 1, "*", assignment_type) # Pointer
    # dereference_type = dereference_types[0]
    # # address_of_types_cls = type_inference.infer_operands_type(program, program.main, 1, "&", dereference_type)
    # address_of_type = ast.Double()
    # var = generators.generate_local_var(program, program.main, address_of_type)
    # right = ast.UnaryExpression("*", ast.UnaryExpression("&", var, address_of_type), dereference_type)
    # program.main.stmts.append(ast.Assignment(left, "=", right, assignment_type))

    # [/DEBUG]

    print()
    print("*" * 80)
    print("* RETURN INSTRUMENTATOR")
    print("*" * 80)
    return_instrumentator.visit(program)
    print()
    print("*" * 80)
    print("* FIX PTR LITERALS")
    print("*" * 80)
    fix_ptr_literal.visit(program)

    # Write code to file
    if args.parts == 1:
        write_in_one_file(program, args)
    else:
        write_in_multiple_files(program, args)

    # Write structure graph
    structure_inspector.write_graph(program, os.path.join(args.working_dir, args.output + ".structure.dot"))

    # Write call graph
    call_inspector.write_graph(program, True, os.path.join(args.working_dir, args.output + ".call.dot"))
    call_inspector.write_graph(program, False, os.path.join(args.working_dir, args.output + ".call_light.dot"))


def main():
    exit(run(parse_args()))


if __name__ == "__main__":
    main()
