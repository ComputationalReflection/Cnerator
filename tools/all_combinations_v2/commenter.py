#! /usr/bin/env python
# -*- coding: utf-8 -*-

from __future__ import absolute_import
from __future__ import division
from __future__ import print_function
from __future__ import unicode_literals

import argparse
import collections
import copy
import io
import json
import linecache
import os
import re
import shlex
import shutil
import sys

DEFAULT_ENCODING = 'utf-8'


def main():
    exit(run(parse_args()))


def print_to_std_error(*args):
    print(*args, file=sys.stderr)


def print_if_verbose(*args):
    """Prints a message if the verbose option has been passed to the application"""
    if __ARGS.verbose:
        print(*args)


def parse_args():
    parser = argparse.ArgumentParser(description='Comment the lines of source code files')
    parser.add_argument("input", metavar="FILE", nargs='+', help="Parse the lines of this files")
    parser.add_argument("-p", "--patterns", metavar="FILE", default="patterns.json",
                        help="Use this patterns files. The default file is %(default)s")
    parser.add_argument("-o", "--overwrite", action="store_true", help="Overwrite original file")
    parser.add_argument("-b", "--batch", action="store_true", help="Use only comment patterns in configuation. Don't do the interactive part")
    parser.add_argument("-c", "--line-comment", default="//", help="Set the line comment. The default is '%(default)s'")
    parser.add_argument("-e", "--input-encoding", default="utf8", help="Set the encoding of the input files. The default is '%(default)s'")
    parser.add_argument("-E", "--code-encoding", default="utf8", help="Set the encoding of the referenced code files. The default is '%(default)s'")
    parser.add_argument("-v", "--verbose", action="store_true", help="Verbose messages (default: %(default)s)")
    global __ARGS
    __ARGS = parser.parse_args()
    return __ARGS


def run(args):
    patterns = get_patterns(args)
    commented_lines = search_patterns(args, patterns)
    commented_lines = expand_comments(patterns, commented_lines)
    comment_files(args, commented_lines)
    return 0


def get_patterns(args):
    try:
        with io.open(args.patterns, "r", encoding=DEFAULT_ENCODING) as f:
            return dotdict(json.load(f))
    except IOError:
        return dotdict({
            "ignore": [],
            "comment": {},
            "comment_range": {},
        })


def search_patterns(args, patterns):
    commented_lines = collections.defaultdict(lambda: collections.defaultdict(list))
    for input in args.input:
        with io.open(input, "r", encoding=args.input_encoding) as f:
            for line in f:
                line = line.rstrip()
                t, m = search_all_patterns(line, patterns, search_comments_only=args.batch)
                if t:
                    if t == "comment":
                        _, file, line, note = m
                        commented_lines[file][line].append(note)
                        print_if_verbose("Commented {}:{}".format(file, line))
                    continue
                if args.batch:
                    continue
                ask_action(line, patterns, commented_lines)
                with io.open(args.patterns, "w", encoding=DEFAULT_ENCODING) as f:
                    json.dump(patterns, f, indent=2)
    return commented_lines


def expand_comments(patterns, commented_lines):
    new_commented_lines = copy.deepcopy(commented_lines)
    for file, lines in commented_lines.iteritems():
        for line in lines:
            line = int(line, 10)
            for pattern, _range in patterns.comment_range.iteritems():
                _range = dotdict(_range)
                code = linecache.getline(file, line).rstrip()
                m = re.search(pattern, code)
                if m:
                    for new_line in range(line + _range.begin, line + _range.end + 1):
                        if new_line == line:
                            continue
                        new_commented_lines[file][str(new_line)] = []
                        print_if_verbose("Commented (expansion) {}:{}".format(file, new_line))
    return new_commented_lines


def comment_files(args, commented_lines):
    for file, lines in commented_lines.iteritems():
        if args.overwrite:
            print_if_verbose("Overwritting original file")
            old_file = file + ".original"
            new_file = file
            if os.path.isfile(file):
                if os.path.isfile(old_file):
                    os.remove(old_file)
                shutil.move(file, old_file)
            else:
                print_if_verbose("Warning: Unable to find '{}'. Trying to use '{}'".format(file, old_file))
                if not os.path.isfile(old_file):
                    print_to_std_error("Error: Unable to find '{}'".format(old_file))
                    return 1
        else:
            old_file = file
            new_file = file + ".commented"

        with io.open(old_file, "r", encoding=args.code_encoding) as fin, io.open(new_file, "w", encoding=args.code_encoding) as fout:
            for i, line in enumerate(fin, start=1):
                if str(i) in lines.keys():
                    notes = lines[str(i)]
                    if notes:
                        end = re.search(r"([\r\n]+)$", line).group(0)
                        for note in notes:
                            if note:
                                fout.write(args.line_comment + "> " + note + end)        
                        fout.write(args.line_comment + " " + line)
                    else:
                        fout.write(args.line_comment + " ")
                        fout.write(line)
                else:
                    fout.write(line)


def ask_action(target_line, patterns, commented_lines):
    while True:
        print("")
        print(target_line)
        try:
            action_line = input("(Action or 'help')> ")
        except KeyboardInterrupt:
            return
        if not action_line:
            continue
        action_args = parse_action(action_line)
        if action_args:
            if action_args.action_handler(
                    args=action_args,
                    patterns=patterns,
                    help_msg=action_args.help_msg,
                    target_line=target_line,
                    commented_lines=commented_lines):
                break


class ParserErrorException(Exception):
    pass


class InteractiveArgumentParser(argparse.ArgumentParser):

    def __init__(self, **kwargs):
        kwargs["prog"] = ""
        kwargs["add_help"] = False
        super(InteractiveArgumentParser, self).__init__(**kwargs)

    def exit(self, status=0, message=None):
        pass

    def error(self, message):
        print_to_std_error("Error: {}".format(message))
        print_to_std_error(self.format_usage())
        raise ParserErrorException()


def parse_action(action_line):
    parser = InteractiveArgumentParser()
    subparsers = parser.add_subparsers(title='Valid actions')

    # Ignore
    parser_ignore = subparsers.add_parser('ignore', help='Ignore this line')
    parser_ignore.add_argument("-p", "--pattern", type=str, help="Ignore all lines with this pattern")
    parser_ignore.add_argument("-h", "--help", action="store_true", help="Show help")
    parser_ignore.set_defaults(action_handler=handle_action_ignore)
    parser_ignore.set_defaults(help_msg=parser_ignore.format_help())

    # Comment
    parser_comment = subparsers.add_parser('comment', help='Comment the related source code line')
    parser_comment.add_argument("pattern", type=str, help="Comment all lines with this pattern")
    parser_comment.add_argument("-f", "--file-group", type=int, default=1,
                                help="Set the number of the group that contains the file in the pattern. The default is %(default)s")
    parser_comment.add_argument("-l", "--line-group", type=int, default=2,
                                help="Set the number of the group that contains the file in the pattern. The default is %(default)s")
    parser_comment.add_argument("-n", "--note-group", type=int, default=-1,
                                help="Set the number of the group that contains the note in the pattern. The default is not use note")
    parser_comment.add_argument("-h", "--help", action="store_true", help="Show help")
    parser_comment.set_defaults(action_handler=handle_action_comment)
    parser_comment.set_defaults(help_msg=parser_comment.format_help())
    parser_comment.format_help()

    # Help
    parser_help = subparsers.add_parser('help', help='Show help')
    parser_help.set_defaults(action_handler=handle_action_help)
    parser_help.set_defaults(help_msg=parser.format_help())

    try:
        return parser.parse_args(shlex.split(action_line))
    except ParserErrorException:
        return None


def handle_action_ignore(args, patterns, help_msg, target_line, commented_lines):
    if args.help:
        print(help_msg)
        return False

    if args.pattern:
        m = search_one_pattern(target_line, args.pattern)
        if m:
            patterns.ignore.append(args.pattern)
            print_if_verbose("Ok")
            return True
        print_to_std_error("Error: This pattern don't match")
    return False


def handle_action_comment(args, patterns, help_msg, target_line, commented_lines):
    if args.help:
        print(help_msg)
        return False

    try:
        m = search_one_pattern(target_line, args.pattern, args.file_group, args.line_group, args.note_group)
    except ValueError as error:
        print_to_std_error("Error: " + str(error))
        return False

    if m:
        _, file, line, note = m
        print_if_verbose("File: {}".format(file))
        print_if_verbose("Line: {}".format(line))
        if note:
            print_if_verbose("Note: {}".format(note))
        commented_lines[file][line] = note
        patterns.comment[args.pattern] = {"file": args.file_group, "line": args.line_group, "note": args.note_group}
        print_if_verbose("Ok")
        return True
    print_to_std_error("Error: This pattern does not match")
    return False


def handle_action_help(args, patterns, help_msg, target_line, commented_lines):
    print(help_msg)
    return False


def search_all_patterns(line, patterns, search_comments_only):

    if not search_comments_only:
        for pattern in patterns.ignore:
            m = search_one_pattern(line, pattern)
            if m:
                return "ignore", m

    for pattern, groups in patterns.comment.iteritems():
        groups = dotdict(groups)
        m = search_one_pattern(line, pattern, groups.file, groups.line, groups.note)
        if m:
            return "comment", m


    return None, None


def search_one_pattern(line, pattern, *groups):
    m = re.search(pattern, line)
    if m:
        result = [m.group(0)]
        for group in groups:
            if group == -1:
                result.append(None)
            else:
                try:
                    result.append(m.group(group))
                except IndexError:
                    raise ValueError("Unable to get the group '{}' in pattern /{}/".format(group, pattern))
        return result
    return None


class dotdict(dict):
    """Enables dict.item syntax (instead of dict['item'])
    See http://stackoverflow.com/questions/224026
    """
    __getattr__ = dict.__getitem__
    __setattr__ = dict.__setitem__
    __delattr__ = dict.__delitem__


if __name__ == "__main__":
    main()