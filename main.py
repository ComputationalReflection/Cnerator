#!/usr/bin/env python
# -*- coding: utf-8 -*-


from __future__ import print_function

import os
import sys

import cnerator
from debug import call_inspector, structure_inspector
from params.parameters import parse_args, get_modules_to_import
from params.writter import write_in_files


def run(args):
    # Sets the recursion limit
    sys.setrecursionlimit(args.recursion)

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
    program = cnerator.generators.generate_program_with_function_distribution({
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
    }, args, 10, remove_unwanted_functions=True)

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

    #  Load all the visitor modules and run them, in the same order
    modules = get_modules_to_import(args.visitors)
    for module in modules:
        module.visit(program)

    # Create output directory
    if not os.path.isdir(args.working_dir):
        os.mkdir(args.working_dir)

    # Write code to files
    write_in_files(program, args)

    if args.debug:
        # Write structure graph
        structure_inspector.write_graph(program, os.path.join(args.working_dir, args.output + ".structure.dot"))
        # Write call graph
        call_inspector.write_graph(program, True, os.path.join(args.working_dir, args.output + ".call.dot"))
        call_inspector.write_graph(program, False, os.path.join(args.working_dir, args.output + ".call_light.dot"))


def main():
    exit(run(parse_args()))


if __name__ == "__main__":
    main()


