#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
This module is aimed at building the epilog of the help message.
Such message shows the different syntactic constructs provided by Cnerator.
"""

import core.probs as probs
from typing import List, Tuple

OPTION_PREFIX = " - "
NEW_LINE_PREFIX = "   "
MESSAGE_PRELUDE = "What follows is the available probabilities, which can be customized by the " \
                  "user with the -p and -P options (see examples in json/probabilities directory):\n"
MAX_LINE_WITH = 80


def build_epilog() -> str:
    """Builds the epilog of the help message"""
    description_list = [f"{OPTION_PREFIX}{prob_name}: {prob_description}" for (prob_name, prob_description)
                        in probs.__dict__[probs.DOC_NAME].items()]
    message = "\n".join(description_list)
    lines = _break_text_into_lines(message, MAX_LINE_WITH)
    lines = [line if line.startswith(OPTION_PREFIX) else NEW_LINE_PREFIX + line for line in lines]
    predule_lines = _break_text_into_lines(MESSAGE_PRELUDE, MAX_LINE_WITH)
    predule_lines.extend(lines)
    return "\n".join(predule_lines)


def _break_line(line: str, max_chars_per_line: int) -> List[str]:
    """Breaks a line into a list of strings with maximum characters per line"""
    lines = _break_line_in_two(line, max_chars_per_line)
    if len(lines) == 1:
        return lines
    return [lines[0]] + _break_line(lines[1], max_chars_per_line)


def _break_line_in_two(line: str, max_chars_per_line: int) -> List[str]:
    """Breaks a line into the first line lower than max_char_per_line and the remaining string"""
    if len(line) <= max_chars_per_line:
        return [line]
    position = 0
    while position < max_chars_per_line:
        new_position = line.find(" ", position)
        if new_position == -1 or new_position >= max_chars_per_line-1:
            return [line[:position-1], line[position:]]
        position = new_position + 1
    return [line]


def _break_text_into_lines(text: str, max_chars_per_line: int) -> List[str]:
    """Breaks a text into lines"""
    input_lines = text.split("\n")
    output_lines = list()
    for line in input_lines:
        output_lines.extend(_break_line(line, max_chars_per_line))
    return output_lines
