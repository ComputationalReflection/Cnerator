# -*- coding: utf-8 -*-



from __future__ import print_function
from __future__ import unicode_literals

import recipes
import re
import os
import json
import locale

################################################################################
# Config
###

# This var points to the location of the "vcvarsall.bat" script
VISUAL_C_PATH = "C:\\Program Files (x86)\\Microsoft Visual Studio 12.0\\VC"

RELATIVE_BASE_DIR = os.path.join(*([".."] * 4))
ABSOLUTE_BASE_DIR = os.path.abspath(os.path.join(os.getcwd(), os.path.dirname(__file__), RELATIVE_BASE_DIR))

def db_connection_filepath():
    filepath = os.path.join(ABSOLUTE_BASE_DIR, "db_connection.json")
    assert os.path.isfile(filepath)
    return filepath


def db_connection_data():
    filepath = db_connection_filepath()
    with open(filepath) as fd:
        return json.load(fd)


def compose_full_server_uri(db):
    db_connection = db_connection_data()
    return "mongodb://{username}:{password}@{host}/{db}?authSource={auth_source}".format(
        db=db, **db_connection)

RECIPE_NAME = "generate_cnerator_tables"
CONFIG = {
    "db_server_uri":            compose_full_server_uri(RECIPE_NAME),
    "default_log_server_uri":   compose_full_server_uri(RECIPE_NAME + "_logs"),
    "default_log_collection":   "recipe",
    "default_task_args": {
        "visual_c_setenv":      '{}\\vcvarsall.bat'.format(VISUAL_C_PATH),
        "visual_c_setenv_args": 'x86',
    },
    "default_context_args": {
        "dry_run":              False,
        "shell":                False,
        "ignore_paths":         (
            # "C:\\Anaconda*\\envs\\phd\\Library\\bin\\",
            # "C:\\cmder\\**\\",
            # "C:\\cmder\\",
            "C:\\jq\\",
            "C:\\Program Files (x86)\\Google\\Chrome\\Application\\",
            # "C:\\Program Files (x86)\\Graphviz*\\bin\\",
            "C:\\Users\\*\\AppData\\Local\\Atlassian\\SourceTree\\git_local\\bin\\",
        ),
        "encoding":             locale.getpreferredencoding(),
        "mute_stdout":          False,
        "mute_stderr":          False,
    },
}



################################################################################
# Utils
###

def camel_case_to_snake_case(name):
    s1 = re.sub('(.)([A-Z][a-z]+)', r'\1_\2', name)
    return re.sub('([a-z0-9])([A-Z])', r'\1_\2', s1).lower()


def escape_regexp(pattern):
    # NOTE: '^' and '"' are used to escape '(', ')' and '|'.
    # Use info from: http://www.robvanderwoude.com/escapechars.php
    return pattern.replace("(", "^(").replace(")", "^)").replace("|", "^|")


################################################################################
# Base classes
###


"""
class ExampleTask(recipes.LocalTask):

    def init_context(self):
        pass

    def input(self):
        pass

    def output(self):
        pass

    def dependencies(self):
        pass

    def run(self, worker_id):
        pass

    # IF function == None AND input failure
    #     abort recipe execution
    # ELIF function() == None AND input failure
    #     continue recipe execution
    # ELSE
    #     this function handles the error
    #     abort recipe execution
    def on_incomplete_requirements(self):
        pass

    # IF function == None AND run failure
    #     abort recipe execution
    # ELIF function() == None AND run failure
    #     continue recipe execution
    # ELSE
    #     this function handles the error
    #     abort recipe execution
    def on_run_failure(self):
        pass
"""


class Main(recipes.LocalTask):

    def dependencies(self):
        return [
            BuildAll(**self.args),
            Clean(**self.args),
        ]

    def run(self, worker_id):
        pass


class Clean(recipes.LocalTask):

    def dependencies(self):
        return BuildAll(**self.args),

    def run(self, worker_id):
        self.context.run('rm *.c.original', shell=True)
        self.context.run('rm *.pdb', shell=True)
        # self.context.run('rm *.log', shell=True)


class BuildAll(recipes.LocalTask):

    def dependencies(self):
        deps = [GenerateFiles(**self.args)]
        tmpmod = __import__("generate_files", fromlist=["operations"])
        deps += [Build(filepath="op_{}.c".format(op), name=op, **self.args) for op, _, _ in tmpmod.operations]
        return deps

    def run(self, worker_id):
        pass

class GenerateFiles(recipes.LocalTask):

    def input(self):
        return self.context.target("./generate_files.py")

    def run(self, worker_id):
        spell = ["python", self.input().protected_str()]
        return self.context.run(spell, shell=True)


class Build(recipes.LocalTask):
    args_types = {
        # XXX: (DOCUMENT IT) If type is None it means not to use it to compose CMD FLAGS
        "filepath": None,
        "name": None,
        "visual_c_setenv": unicode,
        "visual_c_setenv_args": unicode,
    }

    def dependencies(self):
        return GenerateFiles(**self.args)

    def input(self):
        return self.context.target(self.args.filepath)

    def run(self, worker_id):
        vc_setenv = self.context.target(self.args.visual_c_setenv, contextualize=False).locate_one().protected_str()
        compileSpell = '"{}" {} & cl.exe /Zi /Od /DDEBUG /Fa /WX /Wall -c {} -Fo {} > compilation_{}.log'.format(
            vc_setenv,
            self.args.visual_c_setenv_args,
            self.input().protected_str(),
            self.input().protected_str().replace(".c", ".obj"),
            self.args.name,
        )
        commentSpell = 'python commenter.py compilation_{}.log -p cl_config.json -b -o -e cp437 -E utf8'.format(
            self.args.name,
        )

        stripSpell = "grep -v '^[^/][^/]' {} > {}".format(
            self.input().protected_str(),
            self.input().protected_str().replace(".c", ".light.c"),
        )
        while True:
            try:
                self.context.run(compileSpell, shell=True)
            except recipes.ContextExecutionError:
                self.context.run(commentSpell, shell=True)
            else:
                # self.context.run(stripSpell, shell=True)
                break


if __name__ == '__main__':
    exit(recipes.run(
        task=Main,
        recipe_globals=globals(),
        **CONFIG
    ))