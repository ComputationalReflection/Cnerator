#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
This module is aimed at processing input json files specifying the probabilities of the syntactic constructs to
be created by Cnerator (command line option -P). See json/probabilities for particular examples.
"""

from core import probs_helper
from typing import Union, Dict
import json
import sys


def parse_probabilities_specification_json_file(file_name: str) -> Dict[str, dict]:
    """Parses a json file with probabilities specifications and returns a valid representation"""
    with open(file_name) as json_file:
        data = json.load(json_file)
        dictionary = _process_json_probs_data(data)
    return dictionary


def _process_json_probs_data(data: dict)-> Dict[str, dict]:
    """Takes the data extracted from the json file a dictionary of probabilities"""
    result = dict()
    for prob_name, prob_dictionary in data.items():
        _process_json_probs_entry(prob_name, prob_dictionary, result)
    return result


def _process_json_probs_entry(prob_name: str, prob_dictionary: dict, result: dict) -> None:
    """Takes one entry of the json probability specification file, process it
    and adds the correct representation to result"""
    from core import probs
    if not probs.does_this_probability_exist(prob_name):
        print(f"Unknown probability '{prob_name}'.", file=sys.stderr)  # probability name is not in probs module
    elif "__prob_distribution__" not in prob_dictionary.keys():
        # 1) fixed probability set by the user
        result[prob_name] = {_eval_str(key): content for (key, content) in prob_dictionary.items()}
    elif prob_dictionary["__prob_distribution__"] == "equal_prob":
        # 2) equal probability for a set of values
        if "__values__" not in prob_dictionary.keys():
            print(f"Equal probability distribution requires a __values__ entry.", file=sys.stderr)
        else:
            values = set()
            for value_str in prob_dictionary["__values__"]:
                values.add(_eval_str(value_str))
            result[prob_name] = probs_helper.compute_equal_prob(values)
    elif prob_dictionary["__prob_distribution__"] in ["proportional_prob", "inverse_proportional_prob"]:
        # 3) (inverse and direct) proportional probability for a set of values that do not sum 0
        if "__values__" not in prob_dictionary.keys():
            print(f"Proportional probability distribution requires a __values__ entry.", file=sys.stderr)
        else:
            # keys of the dict must be evaluated (e.g., "3" -> 3, "ast.Int" -> ast.Int)
            values_dict = {_eval_str(key): content for (key, content) in prob_dictionary["__values__"].items()}
            if prob_name == "proportional_prob":  # direct proportional
                result[prob_name] = probs_helper.compute_proportional_prob(values_dict)
            else:  # inverse proportional
                result[prob_name] = probs_helper.compute_inverse_proportional_prob(values_dict)
    elif prob_dictionary["__prob_distribution__"] == "normal_prob":
        # 5) normal probability, given a mean and standard deviation
        if not {"__mean__", "__stdev__"}.issubset(prob_dictionary.keys()):
            print(f"Normal probability distribution requires __mean__  and __stdev__ entries.", file=sys.stderr)
        else:
            result[prob_name] = probs_helper.compute_normal_prob(prob_dictionary["__mean__"],
                                                                 prob_dictionary["__stdev__"])
    else:
        print(f"Unknown probability distribution '{prob_dictionary['__prob_distribution__']}'.", file=sys.stderr)


def _eval_str(string: str) -> object:
    """Evaluates a string and returns its evaluation"""
    import core
    from core import ast
    global_variables = {"core": core, "cnerator": core, "ast": ast}
    try:
        return eval(string, global_variables)
    except:
        return string  # if the string is not evaluable, then we just return the string
