# -*- coding: utf-8 -*-


from __future__ import print_function
from __future__ import unicode_literals

import io

import cnerator


def get_struct_name(t):
    while True:
        if isinstance(t, cnerator.ast.Struct):
            return t.name
        elif isinstance(t, (cnerator.ast.Pointer, cnerator.ast.Array)):
            t = t.type
        else:
            return None


def write_graph(program, path):

    def get_color(t):
        if t.name.startswith("array"):
            return ' bgcolor="steelblue1"'
        if t.name.startswith("pointer"):
            return ' bgcolor="tomato"'
        if t.name.startswith("struct"):
            return ' bgcolor="greenyellow"'
        return ""

    with io.open(path, mode="w", encoding="utf-8") as buffer:

        buffer.write("digraph G {\n")
        buffer.write('graph [rankdir = "LR"];\n')
        buffer.write('node [fontsize = "8"];\n')
        buffer.write('edge [fontsize = "8"];\n')

        # Write nodes
        for s in program.structs:
            name = s.name
            label = """<<table border="0" cellspacing="0">
\t\t<tr><td port="head" border="1" bgcolor="black"><font color="white">{}</font></td></tr>
\t\t{}
\t</table>>""".format(
                name,
                "\n\t\t".join('<tr><td port="{}" border="1"{}>{}</td></tr>'.format(
                    f,
                    get_color(t),
                    t.name) for f, t in s.fields))
            buffer.write('"{}" [\n\tlabel = {}\n\tshape = none\n];\n'.format(name, label))

        # Write edges
        for s in program.structs:
            for f, t in s.fields:
                name = get_struct_name(t)
                if name is not None:
                    buffer.write('"{}":{} -> "{}":head\n'.format(s.name, f, name))

        buffer.write("}\n")