#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
This modulete takes the program representation (AST) and writes it into the different
compilation units specified by the user through the ``-n`` or ``-nfiles`` options.
"""

import io
import os

import core

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
        " * VOID functions:    {}\n".format(sum(1 for f in program.functions if f.return_type == core.ast.Void())),
        " * NO-VOID functions: {} + 1\n".format(
            sum(1 for f in program.functions if f.return_type != core.ast.Void())),
        " */\n"
        '#include "functions.h"\n',
        "\n", main, "\n",
    ])
    file_path = os.path.join(args.output_dir, args.output + ".c")
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
        file_path = os.path.join(args.output_dir, "structs.h")
        with io.open(file_path, mode="w", encoding="utf-8") as f:
            f.write("".join(structs_file))

    # Write prototypes file
    prototypes_file = [
        "#ifndef __prototypes_h__\n",
        "#define __prototypes_h__\n\n\n\n",
        prototypes,
        "\n\n\n\n#endif\n"
    ]
    file_path = os.path.join(args.output_dir, "prototypes.h")
    with io.open(file_path, mode="w", encoding="utf-8") as f:
        f.write("".join(prototypes_file))

    # Write global_vars file
    global_vars_file = [
        "#ifndef __global_vars_h__\n",
        "#define __global_vars_h__\n\n\n\n",
        global_vars,
        "\n\n\n\n#endif\n"
    ]
    file_path = os.path.join(args.output_dir, "global_vars.h")
    with io.open(file_path, mode="w", encoding="utf-8") as f:
        f.write("".join(global_vars_file))

    # Write functions file
    functions_file = [
        "#ifndef __functions_h__\n",
        "#define __functions_h__\n\n\n\n",
        functions,
        "\n\n\n\n#endif\n"
    ]
    file_path = os.path.join(args.output_dir, "functions.h")
    with io.open(file_path, mode="w", encoding="utf-8") as f:
        f.write("".join(functions_file))


def split_in_similar_parts(seq, amount):
    avg = len(seq) / float(amount)
    last = 0.0
    for i in range(amount):
        b = int(last)
        e = int(last + avg)
        if i == amount - 1:
            e = None
        yield seq[b:e]
        last += avg


def write_in_multiple_files(program, args):
    includes, defines, structs, prototypes, global_vars, _, main = program.stringify_parts()
    functions_parts = split_in_similar_parts(program.functions, args.nfiles)

    if args.verbose:
        print("")
        print("*" * 80)
        print("* WRITING IN FILES")
        print("*" * 80)
        print("Global: {} total functions.".format(len(program.functions)))

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
        " * VOID functions:    {}\n".format(sum(1 for f in program.functions if f.return_type == core.ast.Void())),
        " * NON-VOID functions: {} + 1\n".format(
            sum(1 for f in program.functions if f.return_type != core.ast.Void())),
        " */\n",
        "\n", main, "\n",
    ])
    file_path = os.path.join(args.output_dir, args.output + ".c")
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
        file_path = os.path.join(args.output_dir, "structs.h")
        with io.open(file_path, mode="w", encoding="utf-8") as f:
            f.write("".join(structs_file))

    # Write prototypes file
    prototypes_file = [
        "#ifndef __prototypes_h__\n",
        "#define __prototypes_h__\n\n\n\n",
        prototypes,
        "\n\n\n\n#endif\n"
    ]
    file_path = os.path.join(args.output_dir, "prototypes.h")
    with io.open(file_path, mode="w", encoding="utf-8") as f:
        f.write("".join(prototypes_file))

    # Write global_vars file
    global_vars_file = [
        "#ifndef __global_vars_h__\n",
        "#define __global_vars_h__\n\n\n\n",
        global_vars,
        "\n\n\n\n#endif\n"
    ]
    file_path = os.path.join(args.output_dir, "global_vars.h")
    with io.open(file_path, mode="w", encoding="utf-8") as f:
        f.write("".join(global_vars_file))

    # Write functions file
    for i, part in enumerate(functions_parts):
        if args.verbose:
            print("Part {}: {} total functions.".format(i + 1, len(part)))

        functions = "".join(func.to_str() for func in part)
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
                sum(1 for f in part if f.return_type == core.ast.Void())),
            " * NO-VOID functions: {}\n".format(
                sum(1 for f in part if f.return_type != core.ast.Void())),
            " */\n",
            "\n", functions, "\n",
        ])

        file_path = os.path.join(args.output_dir, "functions_{}.c".format(i + 1))
        with io.open(file_path, mode="w", encoding="utf-8") as f:
            f.write("".join(functions_file))


def write_in_files(program, args):
    if args.nfiles == 1:
        write_in_one_file(program, args)
    else:
        write_in_multiple_files(program, args)


def write_in_one_file(program, args):
    code = replace_code(program.to_str(indent=0))

    # Write code to main file
    file_path = os.path.join(args.output_dir, args.output + ".c")
    with io.open(file_path, mode="w", encoding="utf-8") as f:
        f.write(code)


def replace_code(code):
    return (code.replace("/ (false)", "/ (true)")
            .replace("% (false)", "% (true)")
            .replace("/ (0)", "/ (1)")
            .replace("% (0)", "% (1)"))
