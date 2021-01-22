#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
This module defines the way expressions are built, relative to the syntax of the C operators.
You can modify then to change the way expressions are created.
However, do not change their names, since a naming convention is used (i.e., reflection).
"""


from fractions import Fraction as fr

###
# Lvalue operators
###

array_lvalue_operators = {
  ('*', 1): fr('1/4'),
  ('->', 1): fr('1/4'),
  ('.', 1): fr('1/4'),
  ('[]', 2): fr('1/4')
}
if array_lvalue_operators:
  assert sum(array_lvalue_operators.values()) == 1

bool_lvalue_operators = {
  ('*', 1): fr('1/4'),
  ('->', 1): fr('1/4'),
  ('.', 1): fr('1/4'),
  ('[]', 2): fr('1/4')
}
if bool_lvalue_operators:
  assert sum(bool_lvalue_operators.values()) == 1

double_lvalue_operators = {
  ('*', 1): fr('1/4'),
  ('->', 1): fr('1/4'),
  ('.', 1): fr('1/4'),
  ('[]', 2): fr('1/4')
}
if double_lvalue_operators:
  assert sum(double_lvalue_operators.values()) == 1

float_lvalue_operators = {
  ('*', 1): fr('1/4'),
  ('->', 1): fr('1/4'),
  ('.', 1): fr('1/4'),
  ('[]', 2): fr('1/4')
}
if float_lvalue_operators:
  assert sum(float_lvalue_operators.values()) == 1

long_double_lvalue_operators = {
  ('*', 1): fr('1/4'),
  ('->', 1): fr('1/4'),
  ('.', 1): fr('1/4'),
  ('[]', 2): fr('1/4')
}
if long_double_lvalue_operators:
  assert sum(long_double_lvalue_operators.values()) == 1

pointer_lvalue_operators = {
  ('*', 1): fr('1/4'),
  ('->', 1): fr('1/4'),
  ('.', 1): fr('1/4'),
  ('[]', 2): fr('1/4')
}
if pointer_lvalue_operators:
  assert sum(pointer_lvalue_operators.values()) == 1

signed_char_lvalue_operators = {
  ('*', 1): fr('1/4'),
  ('->', 1): fr('1/4'),
  ('.', 1): fr('1/4'),
  ('[]', 2): fr('1/4')
}
if signed_char_lvalue_operators:
  assert sum(signed_char_lvalue_operators.values()) == 1

signed_int_lvalue_operators = {
  ('*', 1): fr('1/4'),
  ('->', 1): fr('1/4'),
  ('.', 1): fr('1/4'),
  ('[]', 2): fr('1/4')
}
if signed_int_lvalue_operators:
  assert sum(signed_int_lvalue_operators.values()) == 1

signed_long_int_lvalue_operators = {
  ('*', 1): fr('1/4'),
  ('->', 1): fr('1/4'),
  ('.', 1): fr('1/4'),
  ('[]', 2): fr('1/4')
}
if signed_long_int_lvalue_operators:
  assert sum(signed_long_int_lvalue_operators.values()) == 1

signed_long_long_int_lvalue_operators = {
  ('*', 1): fr('1/4'),
  ('->', 1): fr('1/4'),
  ('.', 1): fr('1/4'),
  ('[]', 2): fr('1/4')
}
if signed_long_long_int_lvalue_operators:
  assert sum(signed_long_long_int_lvalue_operators.values()) == 1

signed_short_int_lvalue_operators = {
  ('*', 1): fr('1/4'),
  ('->', 1): fr('1/4'),
  ('.', 1): fr('1/4'),
  ('[]', 2): fr('1/4')
}
if signed_short_int_lvalue_operators:
  assert sum(signed_short_int_lvalue_operators.values()) == 1

struct_lvalue_operators = {
  ('*', 1): fr('1/4'),
  ('->', 1): fr('1/4'),
  ('.', 1): fr('1/4'),
  ('[]', 2): fr('1/4')
}
if struct_lvalue_operators:
  assert sum(struct_lvalue_operators.values()) == 1

unsigned_char_lvalue_operators = {
  ('*', 1): fr('1/4'),
  ('->', 1): fr('1/4'),
  ('.', 1): fr('1/4'),
  ('[]', 2): fr('1/4')
}
if unsigned_char_lvalue_operators:
  assert sum(unsigned_char_lvalue_operators.values()) == 1

unsigned_int_lvalue_operators = {
  ('*', 1): fr('1/4'),
  ('->', 1): fr('1/4'),
  ('.', 1): fr('1/4'),
  ('[]', 2): fr('1/4')
}
if unsigned_int_lvalue_operators:
  assert sum(unsigned_int_lvalue_operators.values()) == 1

unsigned_long_int_lvalue_operators = {
  ('*', 1): fr('1/4'),
  ('->', 1): fr('1/4'),
  ('.', 1): fr('1/4'),
  ('[]', 2): fr('1/4')
}
if unsigned_long_int_lvalue_operators:
  assert sum(unsigned_long_int_lvalue_operators.values()) == 1

unsigned_long_long_int_lvalue_operators = {
  ('*', 1): fr('1/4'),
  ('->', 1): fr('1/4'),
  ('.', 1): fr('1/4'),
  ('[]', 2): fr('1/4')
}
if unsigned_long_long_int_lvalue_operators:
  assert sum(unsigned_long_long_int_lvalue_operators.values()) == 1

unsigned_short_int_lvalue_operators = {
  ('*', 1): fr('1/4'),
  ('->', 1): fr('1/4'),
  ('.', 1): fr('1/4'),
  ('[]', 2): fr('1/4')
}
if unsigned_short_int_lvalue_operators:
  assert sum(unsigned_short_int_lvalue_operators.values()) == 1


###
# Complex assignment operators
###

array_assignment_operators = {}
if array_assignment_operators:
  assert sum(array_assignment_operators.values()) == 1

bool_assignment_operators = {
  ('%=', 1): fr('1/257'),
  ('&=', 1): fr('100/257'), ##
  ('*=', 1): fr('1/257'),
  ('+=', 1): fr('1/257'),
  ('-=', 1): fr('1/257'),
  ('/=', 1): fr('1/257'),
  ('<<=', 1): fr('1/257'),
  ('>>=', 1): fr('1/257'),
  ('^=', 1): fr('50/257'), #
  ('|=', 1): fr('100/257')  ##
}
if bool_assignment_operators:
  assert sum(bool_assignment_operators.values()) == 1

double_assignment_operators = {
  ('*=', 1): fr('1/4'), #
  ('+=', 1): fr('1/4'), #
  ('-=', 1): fr('1/4'), #
  ('/=', 1): fr('1/4'), #
}
if double_assignment_operators:
  assert sum(double_assignment_operators.values()) == 1

float_assignment_operators = {
  ('*=', 1): fr('1/4'),  #
  ('+=', 1): fr('1/4'),  #
  ('-=', 1): fr('1/4'),  #
  ('/=', 1): fr('1/4'),  #
}
if float_assignment_operators:
  assert sum(float_assignment_operators.values()) == 1

long_double_assignment_operators = {
  ('*=', 1): fr('1/4'),  #
  ('+=', 1): fr('1/4'),  #
  ('-=', 1): fr('1/4'),  #
  ('/=', 1): fr('1/4'),  #
}
if long_double_assignment_operators:
  assert sum(long_double_assignment_operators.values()) == 1

pointer_assignment_operators = {
  ('+=', 1): fr('1/2'),
  ('-=', 1): fr('1/2')
}
if pointer_assignment_operators:
  assert sum(pointer_assignment_operators.values()) == 1

signed_char_assignment_operators = {
  ('%=', 1): fr('1/255'),
  ('&=', 1): fr('1/255'),
  ('*=', 1): fr('50/255'),
  ('+=', 1): fr('50/255'),
  ('-=', 1): fr('50/255'),
  ('/=', 1): fr('50/255'),
  ('<<=', 1): fr('1/255'),
  ('>>=', 1): fr('1/255'),
  ('^=', 1): fr('1/255'),
  ('|=', 1): fr('50/255')
}
if signed_char_assignment_operators:
  assert sum(signed_char_assignment_operators.values()) == 1

signed_int_assignment_operators = {
  ('%=', 1): fr('1/255'),
  ('&=', 1): fr('1/255'),
  ('*=', 1): fr('50/255'),
  ('+=', 1): fr('50/255'),
  ('-=', 1): fr('50/255'),
  ('/=', 1): fr('50/255'),
  ('<<=', 1): fr('1/255'),
  ('>>=', 1): fr('1/255'),
  ('^=', 1): fr('1/255'),
  ('|=', 1): fr('50/255')
}
if signed_int_assignment_operators:
  assert sum(signed_int_assignment_operators.values()) == 1

signed_long_int_assignment_operators = {
  ('%=', 1): fr('1/255'),
  ('&=', 1): fr('1/255'),
  ('*=', 1): fr('50/255'),
  ('+=', 1): fr('50/255'),
  ('-=', 1): fr('50/255'),
  ('/=', 1): fr('50/255'),
  ('<<=', 1): fr('1/255'),
  ('>>=', 1): fr('1/255'),
  ('^=', 1): fr('1/255'),
  ('|=', 1): fr('50/255')
}
if signed_long_int_assignment_operators:
  assert sum(signed_long_int_assignment_operators.values()) == 1

signed_long_long_int_assignment_operators = {
  ('%=', 1): fr('1/255'),
  ('&=', 1): fr('1/255'),
  ('*=', 1): fr('50/255'),
  ('+=', 1): fr('50/255'),
  ('-=', 1): fr('50/255'),
  ('/=', 1): fr('50/255'),
  ('<<=', 1): fr('1/255'),
  ('>>=', 1): fr('1/255'),
  ('^=', 1): fr('1/255'),
  ('|=', 1): fr('50/255')
}
if signed_long_long_int_assignment_operators:
  assert sum(signed_long_long_int_assignment_operators.values()) == 1

signed_short_int_assignment_operators = {
  ('%=', 1): fr('1/255'),
  ('&=', 1): fr('1/255'),
  ('*=', 1): fr('50/255'),
  ('+=', 1): fr('50/255'),
  ('-=', 1): fr('50/255'),
  ('/=', 1): fr('50/255'),
  ('<<=', 1): fr('1/255'),
  ('>>=', 1): fr('1/255'),
  ('^=', 1): fr('1/255'),
  ('|=', 1): fr('50/255')
}
if signed_short_int_assignment_operators:
  assert sum(signed_short_int_assignment_operators.values()) == 1

struct_assignment_operators = {}
if struct_assignment_operators:
  assert sum(struct_assignment_operators.values()) == 1

unsigned_char_assignment_operators = {
  ('%=', 1): fr('1/255'),
  ('&=', 1): fr('1/255'),
  ('*=', 1): fr('50/255'),
  ('+=', 1): fr('50/255'),
  ('-=', 1): fr('50/255'),
  ('/=', 1): fr('50/255'),
  ('<<=', 1): fr('1/255'),
  ('>>=', 1): fr('1/255'),
  ('^=', 1): fr('1/255'),
  ('|=', 1): fr('50/255')
}
if unsigned_char_assignment_operators:
  assert sum(unsigned_char_assignment_operators.values()) == 1

unsigned_int_assignment_operators = {
  ('%=', 1): fr('1/255'),
  ('&=', 1): fr('1/255'),
  ('*=', 1): fr('50/255'),
  ('+=', 1): fr('50/255'),
  ('-=', 1): fr('50/255'),
  ('/=', 1): fr('50/255'),
  ('<<=', 1): fr('1/255'),
  ('>>=', 1): fr('1/255'),
  ('^=', 1): fr('1/255'),
  ('|=', 1): fr('50/255')
}
if unsigned_int_assignment_operators:
  assert sum(unsigned_int_assignment_operators.values()) == 1

unsigned_long_int_assignment_operators = {
  ('%=', 1): fr('1/255'),
  ('&=', 1): fr('1/255'),
  ('*=', 1): fr('50/255'),
  ('+=', 1): fr('50/255'),
  ('-=', 1): fr('50/255'),
  ('/=', 1): fr('50/255'),
  ('<<=', 1): fr('1/255'),
  ('>>=', 1): fr('1/255'),
  ('^=', 1): fr('1/255'),
  ('|=', 1): fr('50/255')
}
if unsigned_long_int_assignment_operators:
  assert sum(unsigned_long_int_assignment_operators.values()) == 1

unsigned_long_long_int_assignment_operators = {
  ('%=', 1): fr('1/255'),
  ('&=', 1): fr('1/255'),
  ('*=', 1): fr('50/255'),
  ('+=', 1): fr('50/255'),
  ('-=', 1): fr('50/255'),
  ('/=', 1): fr('50/255'),
  ('<<=', 1): fr('1/255'),
  ('>>=', 1): fr('1/255'),
  ('^=', 1): fr('1/255'),
  ('|=', 1): fr('50/255')
}
if unsigned_long_long_int_assignment_operators:
  assert sum(unsigned_long_long_int_assignment_operators.values()) == 1

unsigned_short_int_assignment_operators = {
  ('%=', 1): fr('1/255'),
  ('&=', 1): fr('1/255'),
  ('*=', 1): fr('50/255'),
  ('+=', 1): fr('50/255'),
  ('-=', 1): fr('50/255'),
  ('/=', 1): fr('50/255'),
  ('<<=', 1): fr('1/255'),
  ('>>=', 1): fr('1/255'),
  ('^=', 1): fr('1/255'),
  ('|=', 1): fr('50/255')
}
if unsigned_short_int_assignment_operators:
  assert sum(unsigned_short_int_assignment_operators.values()) == 1


###
# Normal operators
###

array_normal_operators = {
  ('*', 1): fr('1/5'),
  ('->', 1): fr('1/5'),
  ('.', 1): fr('1/5'),
  ('?:', 3): fr('1/5'),
  ('[]', 2): fr('1/5')
}
if array_normal_operators:
  assert sum(array_normal_operators.values()) == 1

bool_normal_operators = {
  ('!', 1): fr('100/1312'),   ##
  ('!=', 2): fr('50/1312'),  #
  ('%', 2): fr('1/1312'),
  ('&', 2): fr('50/1312'),   #
  ('&&', 2): fr('100/1312'),  ##
  ('()', 1): fr('100/1312'),  ##
  ('*', 1): fr('100/1312'),   ##
  ('*', 2): fr('1/1312'),
  ('+', 1): fr('1/1312'),
  ('+', 2): fr('1/1312'),
  ('++', 1): fr('1/1312'),
  ('-', 1): fr('1/1312'),
  ('-', 2): fr('1/1312'),
  ('--', 1): fr('1/1312'),
  ('->', 1): fr('100/1312'),  ##
  ('.', 1): fr('100/1312'),   ##
  ('/', 2): fr('1/1312'),
  ('<', 2): fr('50/1312'),   #
  ('<<', 2): fr('1/1312'),
  ('<=', 2): fr('50/1312'),  #
  ('==', 2): fr('50/1312'),  #
  ('>', 2): fr('50/1312'),   #
  ('>=', 2): fr('50/1312'),  #
  ('>>', 2): fr('1/1312'),
  ('?:', 3): fr('1/1312'),
  ('[]', 2): fr('100/1312'),  ##
  ('^', 2): fr('50/1312'),   #
  ('|', 2): fr('50/1312'),   #
  ('||', 2): fr('100/1312'),  ##
  ('~', 1): fr('50/1312')    #
}
if bool_normal_operators:
  assert sum(bool_normal_operators.values()) == 1

double_normal_operators = {
  ('!', 1): fr('1/1316'),
  ('!=', 2): fr('1/1316'),
  ('%', 2): fr('1/1316'),
  ('&', 2): fr('1/1316'),
  ('&&', 2): fr('1/1316'),
  ('()', 1): fr('100/1316'),
  ('*', 1): fr('100/1316'),
  ('*', 2): fr('100/1316'),
  ('+', 1): fr('50/1316'),
  ('+', 2): fr('100/1316'),
  ('++', 1): fr('100/1316'),
  ('-', 1): fr('100/1316'),
  ('-', 2): fr('100/1316'),
  ('--', 1): fr('100/1316'),
  ('->', 1): fr('100/1316'),
  ('.', 1): fr('100/1316'),
  ('/', 2): fr('100/1316'),
  ('<', 2): fr('1/1316'),
  ('<<', 2): fr('1/1316'),
  ('<=', 2): fr('1/1316'),
  ('==', 2): fr('1/1316'),
  ('>', 2): fr('1/1316'),
  ('>=', 2): fr('1/1316'),
  ('>>', 2): fr('1/1316'),
  ('?:', 3): fr('50/1316'),
  ('[]', 2): fr('100/1316'),
  ('^', 2): fr('1/1316'),
  ('|', 2): fr('1/1316'),
  ('||', 2): fr('1/1316'),
  ('~', 1): fr('1/1316')
}
if double_normal_operators:
  assert sum(double_normal_operators.values()) == 1

float_normal_operators = {
  ('!', 1): fr('1/1301'),
  ('()', 1): fr('100/1301'),
  ('*', 1): fr('100/1301'),
  ('*', 2): fr('100/1301'),
  ('+', 1): fr('50/1301'),
  ('+', 2): fr('100/1301'),
  ('++', 1): fr('100/1301'),
  ('-', 1): fr('100/1301'),
  ('-', 2): fr('100/1301'),
  ('--', 1): fr('100/1301'),
  ('->', 1): fr('100/1301'),
  ('.', 1): fr('100/1301'),
  ('/', 2): fr('100/1301'),
  ('?:', 3): fr('50/1301'),
  ('[]', 2): fr('100/1301')
}
if float_normal_operators:
  assert sum(float_normal_operators.values()) == 1

long_double_normal_operators = {
  ('!', 1): fr('1/1316'),
  ('!=', 2): fr('1/1316'),
  ('%', 2): fr('1/1316'),
  ('&', 2): fr('1/1316'),
  ('&&', 2): fr('1/1316'),
  ('()', 1): fr('100/1316'),
  ('*', 1): fr('100/1316'),
  ('*', 2): fr('100/1316'),
  ('+', 1): fr('50/1316'),
  ('+', 2): fr('100/1316'),
  ('++', 1): fr('100/1316'),
  ('-', 1): fr('100/1316'),
  ('-', 2): fr('100/1316'),
  ('--', 1): fr('100/1316'),
  ('->', 1): fr('100/1316'),
  ('.', 1): fr('100/1316'),
  ('/', 2): fr('100/1316'),
  ('<', 2): fr('1/1316'),
  ('<<', 2): fr('1/1316'),
  ('<=', 2): fr('1/1316'),
  ('==', 2): fr('1/1316'),
  ('>', 2): fr('1/1316'),
  ('>=', 2): fr('1/1316'),
  ('>>', 2): fr('1/1316'),
  ('?:', 3): fr('50/1316'),
  ('[]', 2): fr('100/1316'),
  ('^', 2): fr('1/1316'),
  ('|', 2): fr('1/1316'),
  ('||', 2): fr('1/1316'),
  ('~', 1): fr('1/1316')
}
if long_double_normal_operators:
  assert sum(long_double_normal_operators.values()) == 1

pointer_normal_operators = {
  ('&', 1): fr('5/51'),
  ('()', 1): fr('5/51'),
  ('*', 1): fr('5/51'),
  ('+', 2): fr('5/51'),
  ('++', 1): fr('5/51'),
  ('-', 2): fr('5/51'),
  ('--', 1): fr('5/51'),
  ('->', 1): fr('5/51'),
  ('.', 1): fr('5/51'),
  ('?:', 3): fr('1/51'),
  ('[]', 2): fr('5/51')
}
if pointer_normal_operators:
  assert sum(pointer_normal_operators.values()) == 1

signed_char_normal_operators = {
  ('!', 1): fr('5/142'),
  ('!=', 2): fr('5/142'),
  ('%', 2): fr('5/142'),
  ('&', 2): fr('5/142'),
  ('&&', 2): fr('5/142'),
  ('()', 1): fr('5/142'),
  ('*', 1): fr('5/142'),
  ('*', 2): fr('5/142'),
  ('+', 1): fr('1/142'),
  ('+', 2): fr('5/142'),
  ('++', 1): fr('5/142'),
  ('-', 1): fr('5/142'),
  ('-', 2): fr('5/142'),
  ('--', 1): fr('5/142'),
  ('->', 1): fr('5/142'),
  ('.', 1): fr('5/142'),
  ('/', 2): fr('5/142'),
  ('<', 2): fr('5/142'),
  ('<<', 2): fr('5/142'),
  ('<=', 2): fr('5/142'),
  ('==', 2): fr('5/142'),
  ('>', 2): fr('5/142'),
  ('>=', 2): fr('5/142'),
  ('>>', 2): fr('5/142'),
  ('?:', 3): fr('1/142'),
  ('[]', 2): fr('5/142'),
  ('^', 2): fr('5/142'),
  ('|', 2): fr('5/142'),
  ('||', 2): fr('5/142'),
  ('~', 1): fr('5/142')
}
if signed_char_normal_operators:
  assert sum(signed_char_normal_operators.values()) == 1

signed_int_normal_operators = {
  ('!', 1): fr('5/142'),
  ('!=', 2): fr('5/142'),
  ('%', 2): fr('5/142'),
  ('&', 2): fr('5/142'),
  ('&&', 2): fr('5/142'),
  ('()', 1): fr('5/142'),
  ('*', 1): fr('5/142'),
  ('*', 2): fr('5/142'),
  ('+', 1): fr('1/142'),
  ('+', 2): fr('5/142'),
  ('++', 1): fr('5/142'),
  ('-', 1): fr('5/142'),
  ('-', 2): fr('5/142'),
  ('--', 1): fr('5/142'),
  ('->', 1): fr('5/142'),
  ('.', 1): fr('5/142'),
  ('/', 2): fr('5/142'),
  ('<', 2): fr('5/142'),
  ('<<', 2): fr('5/142'),
  ('<=', 2): fr('5/142'),
  ('==', 2): fr('5/142'),
  ('>', 2): fr('5/142'),
  ('>=', 2): fr('5/142'),
  ('>>', 2): fr('5/142'),
  ('?:', 3): fr('1/142'),
  ('[]', 2): fr('5/142'),
  ('^', 2): fr('5/142'),
  ('|', 2): fr('5/142'),
  ('||', 2): fr('5/142'),
  ('~', 1): fr('5/142')
}
if signed_int_normal_operators:
  assert sum(signed_int_normal_operators.values()) == 1

signed_long_int_normal_operators = {
  ('!', 1): fr('5/142'),
  ('!=', 2): fr('5/142'),
  ('%', 2): fr('5/142'),
  ('&', 2): fr('5/142'),
  ('&&', 2): fr('5/142'),
  ('()', 1): fr('5/142'),
  ('*', 1): fr('5/142'),
  ('*', 2): fr('5/142'),
  ('+', 1): fr('1/142'),
  ('+', 2): fr('5/142'),
  ('++', 1): fr('5/142'),
  ('-', 1): fr('5/142'),
  ('-', 2): fr('5/142'),
  ('--', 1): fr('5/142'),
  ('->', 1): fr('5/142'),
  ('.', 1): fr('5/142'),
  ('/', 2): fr('5/142'),
  ('<', 2): fr('5/142'),
  ('<<', 2): fr('5/142'),
  ('<=', 2): fr('5/142'),
  ('==', 2): fr('5/142'),
  ('>', 2): fr('5/142'),
  ('>=', 2): fr('5/142'),
  ('>>', 2): fr('5/142'),
  ('?:', 3): fr('1/142'),
  ('[]', 2): fr('5/142'),
  ('^', 2): fr('5/142'),
  ('|', 2): fr('5/142'),
  ('||', 2): fr('5/142'),
  ('~', 1): fr('5/142')
}
if signed_long_int_normal_operators:
  assert sum(signed_long_int_normal_operators.values()) == 1

signed_long_long_int_normal_operators = {
  ('!', 1): fr('5/142'),
  ('!=', 2): fr('5/142'),
  ('%', 2): fr('5/142'),
  ('&', 2): fr('5/142'),
  ('&&', 2): fr('5/142'),
  ('()', 1): fr('5/142'),
  ('*', 1): fr('5/142'),
  ('*', 2): fr('5/142'),
  ('+', 1): fr('1/142'),
  ('+', 2): fr('5/142'),
  ('++', 1): fr('5/142'),
  ('-', 1): fr('5/142'),
  ('-', 2): fr('5/142'),
  ('--', 1): fr('5/142'),
  ('->', 1): fr('5/142'),
  ('.', 1): fr('5/142'),
  ('/', 2): fr('5/142'),
  ('<', 2): fr('5/142'),
  ('<<', 2): fr('5/142'),
  ('<=', 2): fr('5/142'),
  ('==', 2): fr('5/142'),
  ('>', 2): fr('5/142'),
  ('>=', 2): fr('5/142'),
  ('>>', 2): fr('5/142'),
  ('?:', 3): fr('1/142'),
  ('[]', 2): fr('5/142'),
  ('^', 2): fr('5/142'),
  ('|', 2): fr('5/142'),
  ('||', 2): fr('5/142'),
  ('~', 1): fr('5/142')
}
if signed_long_long_int_normal_operators:
  assert sum(signed_long_long_int_normal_operators.values()) == 1

signed_short_int_normal_operators = {
  ('!', 1): fr('5/142'),
  ('!=', 2): fr('5/142'),
  ('%', 2): fr('5/142'),
  ('&', 2): fr('5/142'),
  ('&&', 2): fr('5/142'),
  ('()', 1): fr('5/142'),
  ('*', 1): fr('5/142'),
  ('*', 2): fr('5/142'),
  ('+', 1): fr('1/142'),
  ('+', 2): fr('5/142'),
  ('++', 1): fr('5/142'),
  ('-', 1): fr('5/142'),
  ('-', 2): fr('5/142'),
  ('--', 1): fr('5/142'),
  ('->', 1): fr('5/142'),
  ('.', 1): fr('5/142'),
  ('/', 2): fr('5/142'),
  ('<', 2): fr('5/142'),
  ('<<', 2): fr('5/142'),
  ('<=', 2): fr('5/142'),
  ('==', 2): fr('5/142'),
  ('>', 2): fr('5/142'),
  ('>=', 2): fr('5/142'),
  ('>>', 2): fr('5/142'),
  ('?:', 3): fr('1/142'),
  ('[]', 2): fr('5/142'),
  ('^', 2): fr('5/142'),
  ('|', 2): fr('5/142'),
  ('||', 2): fr('5/142'),
  ('~', 1): fr('5/142')
}
if signed_short_int_normal_operators:
  assert sum(signed_short_int_normal_operators.values()) == 1

struct_normal_operators = {
  ('*', 1): fr('1/5'),
  ('->', 1): fr('1/5'),
  ('.', 1): fr('1/5'),
  ('?:', 3): fr('1/5'),
  ('[]', 2): fr('1/5')
}
if struct_normal_operators:
  assert sum(struct_normal_operators.values()) == 1

unsigned_char_normal_operators = {
  ('!', 1): fr('5/142'),
  ('!=', 2): fr('5/142'),
  ('%', 2): fr('5/142'),
  ('&', 2): fr('5/142'),
  ('&&', 2): fr('5/142'),
  ('()', 1): fr('5/142'),
  ('*', 1): fr('5/142'),
  ('*', 2): fr('5/142'),
  ('+', 1): fr('1/142'),
  ('+', 2): fr('5/142'),
  ('++', 1): fr('5/142'),
  ('-', 1): fr('5/142'),
  ('-', 2): fr('5/142'),
  ('--', 1): fr('5/142'),
  ('->', 1): fr('5/142'),
  ('.', 1): fr('5/142'),
  ('/', 2): fr('5/142'),
  ('<', 2): fr('5/142'),
  ('<<', 2): fr('5/142'),
  ('<=', 2): fr('5/142'),
  ('==', 2): fr('5/142'),
  ('>', 2): fr('5/142'),
  ('>=', 2): fr('5/142'),
  ('>>', 2): fr('5/142'),
  ('?:', 3): fr('1/142'),
  ('[]', 2): fr('5/142'),
  ('^', 2): fr('5/142'),
  ('|', 2): fr('5/142'),
  ('||', 2): fr('5/142'),
  ('~', 1): fr('5/142')
}
if unsigned_char_normal_operators:
  assert sum(unsigned_char_normal_operators.values()) == 1

unsigned_int_normal_operators = {
  ('!', 1): fr('5/142'),
  ('!=', 2): fr('5/142'),
  ('%', 2): fr('5/142'),
  ('&', 2): fr('5/142'),
  ('&&', 2): fr('5/142'),
  ('()', 1): fr('5/142'),
  ('*', 1): fr('5/142'),
  ('*', 2): fr('5/142'),
  ('+', 1): fr('1/142'),
  ('+', 2): fr('5/142'),
  ('++', 1): fr('5/142'),
  ('-', 1): fr('5/142'),
  ('-', 2): fr('5/142'),
  ('--', 1): fr('5/142'),
  ('->', 1): fr('5/142'),
  ('.', 1): fr('5/142'),
  ('/', 2): fr('5/142'),
  ('<', 2): fr('5/142'),
  ('<<', 2): fr('5/142'),
  ('<=', 2): fr('5/142'),
  ('==', 2): fr('5/142'),
  ('>', 2): fr('5/142'),
  ('>=', 2): fr('5/142'),
  ('>>', 2): fr('5/142'),
  ('?:', 3): fr('1/142'),
  ('[]', 2): fr('5/142'),
  ('^', 2): fr('5/142'),
  ('|', 2): fr('5/142'),
  ('||', 2): fr('5/142'),
  ('~', 1): fr('5/142')
}
if unsigned_int_normal_operators:
  assert sum(unsigned_int_normal_operators.values()) == 1

unsigned_long_int_normal_operators = {
  ('!', 1): fr('5/142'),
  ('!=', 2): fr('5/142'),
  ('%', 2): fr('5/142'),
  ('&', 2): fr('5/142'),
  ('&&', 2): fr('5/142'),
  ('()', 1): fr('5/142'),
  ('*', 1): fr('5/142'),
  ('*', 2): fr('5/142'),
  ('+', 1): fr('1/142'),
  ('+', 2): fr('5/142'),
  ('++', 1): fr('5/142'),
  ('-', 1): fr('5/142'),
  ('-', 2): fr('5/142'),
  ('--', 1): fr('5/142'),
  ('->', 1): fr('5/142'),
  ('.', 1): fr('5/142'),
  ('/', 2): fr('5/142'),
  ('<', 2): fr('5/142'),
  ('<<', 2): fr('5/142'),
  ('<=', 2): fr('5/142'),
  ('==', 2): fr('5/142'),
  ('>', 2): fr('5/142'),
  ('>=', 2): fr('5/142'),
  ('>>', 2): fr('5/142'),
  ('?:', 3): fr('1/142'),
  ('[]', 2): fr('5/142'),
  ('^', 2): fr('5/142'),
  ('|', 2): fr('5/142'),
  ('||', 2): fr('5/142'),
  ('~', 1): fr('5/142')
}
if unsigned_long_int_normal_operators:
  assert sum(unsigned_long_int_normal_operators.values()) == 1

unsigned_long_long_int_normal_operators = {
  ('!', 1): fr('5/142'),
  ('!=', 2): fr('5/142'),
  ('%', 2): fr('5/142'),
  ('&', 2): fr('5/142'),
  ('&&', 2): fr('5/142'),
  ('()', 1): fr('5/142'),
  ('*', 1): fr('5/142'),
  ('*', 2): fr('5/142'),
  ('+', 1): fr('1/142'),
  ('+', 2): fr('5/142'),
  ('++', 1): fr('5/142'),
  ('-', 1): fr('5/142'),
  ('-', 2): fr('5/142'),
  ('--', 1): fr('5/142'),
  ('->', 1): fr('5/142'),
  ('.', 1): fr('5/142'),
  ('/', 2): fr('5/142'),
  ('<', 2): fr('5/142'),
  ('<<', 2): fr('5/142'),
  ('<=', 2): fr('5/142'),
  ('==', 2): fr('5/142'),
  ('>', 2): fr('5/142'),
  ('>=', 2): fr('5/142'),
  ('>>', 2): fr('5/142'),
  ('?:', 3): fr('1/142'),
  ('[]', 2): fr('5/142'),
  ('^', 2): fr('5/142'),
  ('|', 2): fr('5/142'),
  ('||', 2): fr('5/142'),
  ('~', 1): fr('5/142')
}
if unsigned_long_long_int_normal_operators:
  assert sum(unsigned_long_long_int_normal_operators.values()) == 1

unsigned_short_int_normal_operators = {
  ('!', 1): fr('5/142'),
  ('!=', 2): fr('5/142'),
  ('%', 2): fr('5/142'),
  ('&', 2): fr('5/142'),
  ('&&', 2): fr('5/142'),
  ('()', 1): fr('5/142'),
  ('*', 1): fr('5/142'),
  ('*', 2): fr('5/142'),
  ('+', 1): fr('1/142'),
  ('+', 2): fr('5/142'),
  ('++', 1): fr('5/142'),
  ('-', 1): fr('5/142'),
  ('-', 2): fr('5/142'),
  ('--', 1): fr('5/142'),
  ('->', 1): fr('5/142'),
  ('.', 1): fr('5/142'),
  ('/', 2): fr('5/142'),
  ('<', 2): fr('5/142'),
  ('<<', 2): fr('5/142'),
  ('<=', 2): fr('5/142'),
  ('==', 2): fr('5/142'),
  ('>', 2): fr('5/142'),
  ('>=', 2): fr('5/142'),
  ('>>', 2): fr('5/142'),
  ('?:', 3): fr('1/142'),
  ('[]', 2): fr('5/142'),
  ('^', 2): fr('5/142'),
  ('|', 2): fr('5/142'),
  ('||', 2): fr('5/142'),
  ('~', 1): fr('5/142')
}
if unsigned_short_int_normal_operators:
  assert sum(unsigned_short_int_normal_operators.values()) == 1

