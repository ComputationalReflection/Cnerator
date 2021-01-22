#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
This module holds the Abstract Syntax Tree (AST) program representation.
Upon generation, the program is represented as an AST that is finally stored as output C source files.
That functionality is provided by the to_str method.
"""

from __future__ import print_function

import collections
import random
import re
import string
from typing import List, Dict


########### Utils ##############

class Singleton(object):
  _instance = None
  def __new__(class_, *args, **kwargs):
    if not isinstance(class_._instance, class_):
        class_._instance = object.__new__(class_, *args, **kwargs)
    return class_._instance


class ASTNode(object):
    def __str__(self):
        return self.__class__.__name__


class UnaryASTNode(ASTNode):
    @property
    def exp(self):
        return self.children[0]

    @exp.setter
    def exp(self, value):
        self.children[0] = value


class BinaryASTNode(ASTNode):
    @property
    def left(self):
        return self.children[0]

    @left.setter
    def left(self, value):
        self.children[0] = value

    @property
    def right(self):
        return self.children[1]

    @right.setter
    def right(self, value):
        self.children[1] = value


class TernaryASTNode(ASTNode):
    @property
    def exp_1(self):
        return self.children[0]

    @exp_1.setter
    def exp_1(self, value):
        self.children[0] = value

    @property
    def exp_2(self):
        return self.children[1]

    @exp_2.setter
    def exp_2(self, value):
        self.children[1] = value

    @property
    def exp_3(self):
        return self.children[2]

    @exp_3.setter
    def exp_3(self, value):
        self.children[2] = value


######### Expressions #############

class UnaryExpression(UnaryASTNode):
    def __init__(self, op, exp, c_type, post_op=False):
        self.op = op
        self.type = c_type
        self.post_op = post_op
        self.children = [exp]

    def to_str(self, indent: int = 0):
        if self.post_op:
            return "{}({}){}".format(indent_str(indent), self.exp.to_str(), self.op)
        return "{}{}({})".format(indent_str(indent), self.op, self.exp.to_str())


class BinaryExpression(BinaryASTNode):
    def __init__(self, left, op, right, c_type):
        self.op = op
        self.type = c_type
        self.children = [left, right]

    def to_str(self, indent: int = 0):
        return "{}({}) {} ({})".format(indent_str(indent), self.left.to_str(), self.op, self.right.to_str())


class TernaryExpression(TernaryASTNode):
    def __init__(self, exp_1, exp_2, exp_3, op, c_type):
        self.op = op
        self.type = c_type
        self.children = [exp_1, exp_2, exp_3]

    def to_str(self, indent: int = 0):
        return "{}({}) {} ({}) {} ({})".format(indent_str(indent), self.exp_1.to_str(), self.op[0], self.exp_2.to_str(),
                                               self.op[1], self.exp_3.to_str())


class ArrayAccessExpression(BinaryASTNode):

    def __init__(self, left, right, c_type):
        self.op = "[]"
        self.type = c_type
        self.children = [left, right]

    def to_str(self, indent: int = 0):
        return "{}({})[{}]".format(indent_str(indent), self.left.to_str(), self.right.to_str())


class StructAccessExpression(UnaryASTNode):

    def __init__(self, op, exp, field, c_type):
        self.op = op
        self.type = c_type
        self.field = field
        self.children = [exp]

    def to_str(self, indent: int = 0):
        return "{}({}){}{}".format(indent_str(indent), self.exp.to_str(), self.op, self.field)


class CastExpression(UnaryExpression):

    def __init__(self, exp, c_type):
        op = "/* CAST */ ({}) ".format(c_type.__declaration__(from_return_in_func_decl=False,
                                                              forze_parenth_in_ptr_to_array=True))
        super(CastExpression, self).__init__(op, exp, c_type, post_op=False)


########### Basic expression types #########

class Literal(ASTNode):
    def __init__(self, value, type):
        self.value = value
        self.type = type

    def to_str(self, indent: int = 0):
        return "{}{}".format(indent_str(indent), self.value)

    def __eq__(self, other) -> bool:
        if not isinstance(other, Literal):
            return False
        return self.value == other.value

    def __hash__(self) -> int:
        return self.value.__hash__()


class Variable(ASTNode):
    def __init__(self, value):
        self.value = value

    def to_str(self, indent: int = 0):
        return "{}{}".format(indent_str(indent), self.value)


############ Statements ##################

class Invocation(ASTNode):
    def __init__(self, func_name, arguments, return_type, _is_stmt):
        self.func_name = func_name
        self.arguments = arguments
        self.return_type = return_type
        self.children = arguments
        self._is_stmt = _is_stmt

    def to_str(self, indent: int = 0):
        arguments = ""
        i = 0
        for arg in self.arguments:
            arguments += arg.to_str()
            if i < len(self.arguments) - 1:
                arguments += ", "
            i += 1
        if self._is_stmt:
            comment = "/* stmt invocation */"
        else:
            comment = "/* expr invocation */"
        return "{}{} {}({})".format(indent_str(indent), comment, self.func_name, arguments)


class Assignment(BinaryASTNode):
    def __init__(self, left, op, right, c_type):
        self.op = op
        self.type = c_type
        self.children = [left, right]

    def to_str(self, indent: int = 0):
        return "{}{} {} {}".format(indent_str(indent), self.left.to_str(), self.op, self.right.to_str())


class Return(UnaryASTNode):
    def __init__(self, exp=None, c_type=None):
        self.c_type = c_type
        self.children = [exp]

    def to_str(self, indent: int = 0):
        if self.exp is not None:
            return "{}return {}".format(indent_str(indent), expression_to_str(self.exp))
        return "{}return".format(indent_str(indent))


class Break(ASTNode):
    def __init__(self):
        pass

    def to_str(self, indent: int = 0):
        return "{}break".format(indent_str(indent))


class Label(ASTNode):
    def __init__(self, label):
        self.label = label

    def to_str(self, indent: int = 0):
        return "{}{}:{}".format(indent_str(indent), self.label, NEW_LINE)


class Block(ASTNode):
    def __init__(self, statements: list):
        self.statements = statements

    def to_str(self, indent: int = 0):
        stmts_str = statements_to_str(self.statements, indent)
        return indent_str(indent) + "{" + NEW_LINE + stmts_str + indent_str(indent) + "}" + NEW_LINE


class While(ASTNode):
    def __init__(self, condition: ASTNode, statements: List[ASTNode]):
        self.condition = condition
        self.statements = statements

    def to_str(self, indent: int = 0):
        result = "{}while ({}) {{ {}".format(indent_str(indent), expression_to_str(self.condition), NEW_LINE)
        result += statements_to_str(self.statements, indent)
        result += indent_str(indent) + "}" + NEW_LINE
        return result


class Do(ASTNode):
    def __init__(self, statements: List[ASTNode], condition: ASTNode):
        self.statements = statements
        self.condition = condition

    def to_str(self, indent: int = 0):
        result = "{}do {{ {}".format(indent_str(indent), NEW_LINE)
        result += statements_to_str(self.statements, indent)
        result += "{}}} while ({});{}".format(indent_str(indent), expression_to_str(self.condition), NEW_LINE)
        return result


class If(ASTNode):
    def __init__(self, condition: ASTNode, if_statements: List[ASTNode], else_statements: List[ASTNode]):
        self.condition = condition
        self.if_statements = if_statements
        self.else_statements = else_statements

    def to_str(self, indent: int = 0):
        result = "{}if ({}) {{ {}".format(indent_str(indent), expression_to_str(self.condition), NEW_LINE)
        result += statements_to_str(self.if_statements, indent)
        if self.else_statements and len(self.else_statements) > 0:
            result += "{}}} else {{ {}".format(indent_str(indent), NEW_LINE)
            result += statements_to_str(self.else_statements, indent)
        result += "{}}}{}".format(indent_str(indent), NEW_LINE)
        return result


class For(ASTNode):
    def __init__(self, initialization: ASTNode, condition: ASTNode, increment: ASTNode, statements: List[ASTNode]):
        self.initialization = initialization
        self.condition = condition
        self.increment = increment
        self.statements = statements

    def to_str(self, indent: int = 0):
        result = "{}for ({}; {}; {}) {{ {}".format(indent_str(indent), expression_to_str(self.initialization),
                                               expression_to_str(self.condition), expression_to_str(self.increment),
                                               NEW_LINE)
        result += statements_to_str(self.statements, indent)
        result += "{}}}{}".format(indent_str(indent), NEW_LINE)
        return result


class Switch(ASTNode):
    def __init__(self, condition: ASTNode, cases: Dict[Literal, List[ASTNode]], default: List[ASTNode]):
        self.condition = condition
        self.cases = cases
        self.default = default

    def to_str(self, indent: int = 0):
        result = "{}switch ({}) {{ {}".format(indent_str(indent), expression_to_str(self.condition), NEW_LINE)
        for case_value, stmts in self.cases.items():
            result += "{}case {}:{}".format(indent_str(indent + 1), literal_to_str(case_value), NEW_LINE)
            result += statements_to_str(stmts, indent + 1)
        if self.default and len(self.default) > 0:
            result += "{}default:{}".format(indent_str(indent + 1), NEW_LINE)
            result += statements_to_str(self.default, indent + 1)
        result += "{}}}{}".format(indent_str(indent), NEW_LINE)
        return result


############# Function and Program nodes ##############

class Function(ASTNode):
    def __init__(self, name, return_type, param_types):
        self.name = name
        self.return_type = return_type
        self.param_types = []
        for i in range(len(param_types)): # ordered list of (name, type)
            self.param_types.append((param(i), param_types[i]))
        self.local_vars = {} # type -> [value_of_local_1, value_of_local_2...]
        self.children = []

    @property
    def stmts(self):
        return self.children

    @stmts.setter
    def stmts(self, value):
        self.children = value

    def to_str(self, indent: int = 0):
        # function declaration
        result = self.__declaration__() + " {" + NEW_LINE
        # local variables
        local_vars = []
        for values in self.local_vars.values():
            for i in range(0, len(values)):
                c_type, value = values[i]
                declaration = ['\t'*(indent+1), c_type.__declaration__(local_variable(c_type, i + 1))]
                if value is not None:
                    declaration.append(" = ")
                    declaration.append(literal_to_str(value))
                declaration.append(";")
                declaration.append(NEW_LINE)
                local_vars.append("".join(declaration))
        result += ''.join(local_vars) + NEW_LINE
        # statements
        result += "".join(statements_to_str(self.stmts, indent))
        result += indent_str(indent) + '}' + NEW_LINE*2
        return result

    def __declaration__(self, **kwargs):
        # Debug info
        result = "/*" + NEW_LINE
        result += " * return type: {}{}".format(self.return_type.name, NEW_LINE)
        for param_name, param_type in self.param_types:
            result += " * {} type: {}{}".format(param_name.to_str(), param_type.name, NEW_LINE)
        result += " */" + NEW_LINE

        result += "{} {}(".format(self.return_type.__declaration__(from_return_in_func_decl=True), self.name)
        i = 0
        for param_name, param_type in self.param_types:
            result += param_type.__declaration__(param_name)
            if i < len(self.param_types)-1:
                result += ", "
            i += 1
        result += ")"
        return result

    def prototype(self):
        return self.__declaration__() + ";"

    def get_param_by_type(self, c_type):
        # returns one param name for that type
        found_params = []
        for param_name, param_type in self.param_types:
            if param_type == c_type:
                found_params.append(param_name)
        if len(found_params) == 0:
            # no param with that type
            return None
        return found_params[random.randint(0, len(found_params)-1)]


class Program(ASTNode):

    def __init__(self):
        # self.includes = ["stdlib.h", "stdbool.h"]
        # self.defines = {"bool": "_Bool"}
        self.includes = []
        self.defines = {"bool": "_Bool", "true": "1", "false": "0", "NULL": "(void *) 0"}
        self.global_vars = {}  # type -> [value_of_global_1, value_of_global_2...]
        self.structs = []
        self.main = None
        self.children = []
        self.invocation_as_expr = collections.defaultdict(int)
        self.invocation_as_stmt = collections.defaultdict(int)

    @property
    def functions(self):
        return self.children


    def stringify_parts(self):

        # includes
        includes = ["#include <%s>" % (f,) for f in self.includes]
        includes = NEW_LINE.join(includes)

        # defines
        defines = ["#define {} {}".format(k, v or "") for k, v in self.defines.items()]
        defines = NEW_LINE.join(defines)

        # structs
        structs = [s.prototype() for s in self._iterate_structs_by_dependencies()]
        structs = NEW_LINE.join(structs)

        # prototypes
        prototypes = [f.prototype() for f in self.functions]
        prototypes = NEW_LINE.join(prototypes)

        # global variables
        global_vars = []
        for values in self.global_vars.values():
            for i in range(0, len(values)):
                c_type, value = values[i]
                declaration = [c_type.__declaration__(global_variable(c_type, i + 1))]
                if value is not None:
                    declaration.append(" = ")
                    declaration.append(literal_to_str(value))
                declaration.append(";")
                declaration.append(NEW_LINE)
                global_vars.append("".join(declaration))
        global_vars = "".join(global_vars)

        # functions
        functions = "".join(func.to_str() for func in self.functions)

        # main function
        main = self.main.to_str()

        return includes, defines, structs, prototypes, global_vars, functions, main

    def to_str(self, indent: int=0):
        includes, defines, structs, prototypes, global_vars, functions, main = self.stringify_parts()

        return "".join([
            "/* INCLUDES */", NEW_LINE, NEW_LINE,
            includes, NEW_LINE, NEW_LINE, NEW_LINE, NEW_LINE,
            "/* DEFINES */", NEW_LINE, NEW_LINE,
            defines, NEW_LINE, NEW_LINE, NEW_LINE, NEW_LINE,
            "/* STRUCTS */", NEW_LINE, NEW_LINE,
            structs, NEW_LINE, NEW_LINE, NEW_LINE, NEW_LINE,
            "/* PROTOTYPES */", NEW_LINE, NEW_LINE,
            prototypes, NEW_LINE, NEW_LINE, NEW_LINE, NEW_LINE,
            "/* GLOBAL VARS */", NEW_LINE, NEW_LINE,
            global_vars, NEW_LINE, NEW_LINE, NEW_LINE, NEW_LINE,
            "/* FUNCTIONS */", NEW_LINE, NEW_LINE,
            functions, NEW_LINE, NEW_LINE, NEW_LINE, NEW_LINE,
            "/* MAIN */", NEW_LINE, NEW_LINE,
            main, NEW_LINE,
        ])

    def _iterate_structs_by_dependencies(self):
        # Compose dependencies dict
        index = {s.name: s for s in self.structs}
        dependencies = {s.name: set() for s in self.structs}
        for struct in self.structs:
            for dependency in struct.struct_references:
                dependencies[dependency.name].add(struct.name)

        # Iterate
        while len(dependencies):
            # Yield all structures without dependencies
            yielded = []
            for struct_name, dependendencies_name in dependencies.items():
                if not dependendencies_name:
                    yield index[struct_name]
                    yielded.append(struct_name)

            # Delete structs without dependencies
            for struct_name in yielded:
                del dependencies[struct_name]

            # Delete references to yielded structures
            for struct_name, dependendencies_name in dependencies.items():
                for struct_name in yielded:
                    try:
                        dependendencies_name.remove(struct_name)
                    except KeyError:
                        pass

    # def get_functions_by_signature(self, param_types, return_type):
    #     result = []
    #     for function in self.functions:
    #         if function.return_type != return_type:
    #             continue
    #         p_types = [c_type for name, c_type in function.param_types]
    #         if param_types == p_types:
    #             result.append(function)
    #     return result
    
    def get_functions_by_return_type(self, return_type):
        result = []
        for function in self.functions:
            if function.return_type == return_type:
                result.append(function)
        return result


########### Types ##############

class Type(object):

    def __eq__(self, other):
        return self.name == other.name

    def to_str(self, indent: int = 0):
        raise NotImplementedError("Not Implemented")

    def __hash__(self):
        """The default hash is just the hash of name of the class.
        This implementation is not valid for composite types."""
        return self.__class__.__name__.__hash__()

    def __declaration__(self, variable=None, **kwargs):
        if variable:
            var_name = variable_to_var_name(variable)
            return " ".join([self.name, var_name])
        return self.name

    def __repr__(self):
        return self.name


class NumericType(Type, Singleton):

    def generate_literal(self, **kwargs):
        if isinstance(self.range[0], float):
            value = str(random.uniform(*self.range))
        else:
            value = str(random.randint(*self.range))
        if hasattr(self, "literal_suffix"):
            return Literal(value + self.literal_suffix, self)
        return Literal("".join(["/* LITERAL */ (", self.name, ") ", value]), self)


class Bool(Type, Singleton):
    values = "true", "false"
    name = "bool"

    def generate_literal(self, **kwargs):
        return Literal(random.choice(self.values), self)


class SignedChar(NumericType):
    range = -2**7, 2**7-1
    name = "signed char"


class UnsignedChar(NumericType):
    range = 0, 2**8-1
    literal_suffix = "U"
    name = "unsigned char"


class SignedShortInt(NumericType):
    range = -2**15, 2**15-1
    name = "signed short int"


class UnsignedShortInt(NumericType):
    range = 0, 2**16-1
    literal_suffix = "U"
    name = "unsigned short int"


class SignedInt(NumericType):
    range = -2**31, 2**31-1
    name = "signed int"


class UnsignedInt(NumericType):
    range = 0, 2**32-1
    literal_suffix = "U"
    name = "unsigned int"


class SignedLongInt(NumericType):
    range = -2**31, 2**31-1
    literal_suffix = "L"
    name = "signed long int"


class UnsignedLongInt(NumericType):
    range = 0, 2**32-1
    literal_suffix = "UL"
    name = "unsigned long int"


class SignedLongLongInt(NumericType):
    range = -2**63, 2**63-1
    literal_suffix = "LL"
    name = "signed long long int"


class UnsignedLongLongInt(NumericType):
    range = 0, 2**64-1
    literal_suffix = "ULL"
    name = "unsigned long long int"


class Float(NumericType):
    range = 1.2E-38, 3.4E+38
    name = "float"


class Double(NumericType):
    range = 2.3E-308, 1.7E+308
    name = "double"


class LongDouble(NumericType):
    range = 2.3E-308, 1.7E+308
    literal_suffix = "L"
    name = "long double"


def structs_references_graph(structs):
    from debug import graph
    references = collections.defaultdict(list)
    for s in structs:
        for f, t in s.fields:
            if t.name.startswith("struct"):
                # references[s].append((f, t, False))
                references[s].append(t)
            elif t.name.startswith("array") and t.type.name.startswith("struct"):
                # references[s].append((f, t.type, True))
                references[s].append(t.type)
    return graph.Graph(references)


def reference_paths_to_struct(struct, structs):
    g = structs_references_graph(structs)
    paths = [path for s in structs for path in g.find_all_paths(s, struct)]
    return paths


class Struct(Type):

    def __init__(self, name, *fields):
        self._name = name
        self.fields = []
        self.blacklisted = set([self])
        for f, t in fields:
            self.add_field(f, t)

    def __hash__(self):
        return self._name.__hash__()

    def add_field(self, field, _type):
        # Check not circular reference
        assert not self.check_circular_reference(_type)
        # Blacklist the current type and the previous ones
        if _type.name.startswith("struct"):
            _type.blacklisted.add(self)
        elif _type.name.startswith("array") and _type.type.name.startswith("struct"):
            _type.type.blacklisted.add(self)
        # Append the field
        self.fields.append([field, _type])

    @property
    def struct_references(self):
        return [t for t in self.blacklisted if t != self]

    def check_circular_reference(self, _type):
        if _type.name.startswith("array") and _type.type.name.startswith("struct"):
            _type = _type.type
        if _type in self.blacklisted:
            return True
        return any(t.check_circular_reference(_type) for t in self.blacklisted if t != self)

    def get_type_by_field(self, field):
        for f, t in self.fields:
            if f == field:
                return t
        raise ValueError("Unable to find field '{}' in '{}'".format(field, self.name))

    def get_field_by_type(self, _type):
        for f, t in self.fields:
            if t == _type:
                return f
        raise ValueError("Unable to find type '{}' in '{}'".format(_type, self.name))

    def has_type(self, _type):
        return any(_type == t for _, t in self.fields)

    @property
    def name(self):
        return "struct " + self._name

    def __declaration__(self, variable=None, **kwargs):
        return "struct {} {}".format(
            self._name,
            " " + variable_to_var_name(variable)
        )

    def generate_literal(self, from_declaration):
        if not from_declaration:
            raise ValueError("The creation of literals is only allowed in var declarations")
        return Literal("{{ {} }}".format(
            ", ".join(".{} = {}".format(n, t.generate_literal(from_declaration=from_declaration).to_str())
                      for n, t in self.fields)
        ), self)

    def prototype(self):
        return "struct {} {{\n    {}\n}};".format(
            self._name,
            "\n    ".join(t.__declaration__(variable=n) + ";" for n, t in self.fields),
        )


def generate_string_literal(size, from_delcaration, type):
    parts = '"' + "".join(random.choice(string.ascii_letters + string.digits) for _ in range(size)) + '"'
    return Literal("".join(parts), type)


class Pointer(Type):

    def __init__(self, type):
        self.type = type

    @property
    def name(self):
        return "pointer " + self.type.name


    def __declaration__(self, variable=None, from_return_in_func_decl=False, forze_parenth_in_ptr_to_array=False, **kwargs):
        var_name = variable_to_var_name(variable)
        if isinstance(self.type, Array) and (not re.match(r"^[][()* ]*$", var_name) or forze_parenth_in_ptr_to_array):
            return self.type.__declaration__("(*{})".format(var_name), from_return_in_func_decl=from_return_in_func_decl)
        return self.type.__declaration__("*{}".format(var_name), from_return_in_func_decl=from_return_in_func_decl)

    def generate_literal(self, from_declaration):
        if not from_declaration:
            raise ValueError("The creation of literals is only allowed in var declarations")
        if isinstance(self.type, (SignedChar, UnsignedChar)):
            return generate_string_literal(random.randint(1, 32), from_declaration, self)
        return Literal("NULL", self)

    def __hash__(self):
        return self.name.__hash__()

class Array(Pointer):

    def __init__(self, _type, size=0, pointer_literal=False, pointer_declaration=False):
        self.type = _type
        self.size = size
        self._pointer_literal = pointer_literal
        self._pointer_declaration = pointer_declaration

    @property
    def name(self):
        return "array " + str(self.size) + " " + self.type.name

    def __declaration__(self, variable=None, from_return_in_func_decl=False, **kwargs):
        from_return_in_func_decl = from_return_in_func_decl or self._pointer_declaration

        # It a function is returning an array, represent it as a pointer
        if from_return_in_func_decl:
            return Pointer.__declaration__(self, variable, from_return_in_func_decl=from_return_in_func_decl)

        var_name = variable_to_var_name(variable) + "[{}]".format(self.size or "")
        return self.type.__declaration__(var_name, from_return_in_func_decl=from_return_in_func_decl)


    def generate_literal(self, from_declaration, size=0):
        if self._pointer_literal:
            return Pointer.generate_literal(self, from_declaration)
        if not from_declaration:
            raise ValueError("The creation of literals is only allowed in var declarations")
        size = size or self.size
        if not size:
            raise ValueError("Must provide a size of the array, in generate_literal or the Array constructor")
        if isinstance(self.type, (SignedChar, UnsignedChar)):
            return generate_string_literal(size, from_declaration, self)
        return Literal("{{ {} }}".format(
            ", ".join(self.type.generate_literal(from_declaration=from_declaration).to_str() for _ in range(size))
        ), self)

    def __hash__(self):
        return self.name.__hash__()


class Void(Type, Singleton):
    name = "void"

    def __hash__(self):
        return self.name.__hash__()

########### Enumerations #########

class FuncProc(object):
    Func, Proc = 1, 2

########## Helper functions ##############

def get_operators(c_type, _type):
    from core import utils, operators
    operator_type = "{}_{}_operators".format(
        utils.camel_case_to_snake_case(c_type.__class__.__name__),
        _type
    )
    return operators.__dict__[operator_type]


def global_variable(c_type, number):
    return Variable("global_" + c_type.name.replace(" ", "_") + "_" + str(number))


def local_variable(c_type, number):
    return Variable("local_" + c_type.name.replace(" ", "_") + "_" + str(number))


def param(number):
    return Variable("param_" + str(number))


def name_struct_field(c_type, number):
    return c_type.name.replace(" ", "_") + "_" + str(number)


def variable_to_var_name(variable: object) -> str:
    """Variable may be a Variable object or just a string; it returns its name as string"""
    if not variable:
        return ""
    return variable.to_str() if isinstance(variable, Variable) else str(variable)


def literal_to_str(literal: object) -> str:
    """Variable may be a Variable object or just a string; it returns its name as string"""
    if not literal:
        return ""
    return literal.to_str() if isinstance(literal, Literal) else str(literal)


def expression_to_str(expression: object) -> str:
    """Converts one expression (it could be an AST node) to a string"""
    try:
        return expression.to_str()
    except:
        return str(expression)


def is_compound_statement(statement: ASTNode) -> bool:
    """Returns if an ASTNode is a coumpund statement"""
    return type(statement) in [Block, If, Switch, Do, While, For]


def indent_str(indent_number: int) -> str:
    """Given a number of indentation, returns the string to be used as prefix for indentation"""
    return "\t" * indent_number


def statements_to_str(statements: List[ASTNode], indent: int) -> str:
    """Takes a list of statements and returns a string with their C representation"""
    stmt_str_list = list()
    for stmt in statements:
        stmt_str = stmt.to_str(indent + 1)
        if not is_compound_statement(stmt) and not isinstance(stmt, Label):
            stmt_str += ";" + NEW_LINE
        stmt_str_list.append(stmt_str)
    return "".join(stmt_str_list)



########## Constants ###############

NEW_LINE = "\n"
