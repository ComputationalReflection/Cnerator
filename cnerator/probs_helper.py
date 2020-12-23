# -*- coding: utf-8 -*-
"""
These functions are used to define the probability of the different syntax constructs of the C language.
Probabilities are defined as Dict[object, float], where the key are the different values to be generated and the
content defines the probability for each one.
All the probabilities (contents of the dictionary) must sum 0.0.
"""

import random
from typing import Dict, List


FLOAT_PRECISION = 1e-8


def random_value(probabilities: Dict[object, float]):
    """Returns one of the values in probabilities (key) given its probability (content)"""
    if abs(sum(probabilities.values()) - 1.0) > FLOAT_PRECISION:
        raise Exception("Probability must sum 1")
    rand = random.random()
    summation = 0
    for key, value in probabilities.items():
        if summation <= rand < summation + value:
            return key
        summation += value
    return probabilities[probabilities.keys()[-1]]


def compute_equal_prob(keys: set, base: float = 1.0) -> Dict[object, float]:
    """Given a list of elements (keys) returns a dictionary with the equal probabilities for all the elements"""
    probabilities = {}
    for key in keys:
        probabilities[key] = base * (1.0 / len(keys))
    return probabilities


def compute_proportional_prob(population: Dict[object, float], base: float = 1.0) -> Dict[object, float]:
    """Given a dictionary of elements and their proportional occurrence, returns a dictionary with its probability
    distribution. For example, {'a':1, 'b':2, c:'1'} returns {'a':0.25, 'b':0.5, c:'0.25'} """
    probabilities = {}
    total = float(sum(population.values()))
    for individual, amount in population.items():
        probabilities[individual] = base * (amount / total)
    assert abs(1.0 - sum(probabilities.values())) <= FLOAT_PRECISION
    return probabilities


def compute_inverse_proportional_prob(population: Dict[object, float], base: float = 1.0) -> Dict[object, float]:
    """Given a dictionary of elements and their inverse proportional occurrence, returns a dictionary with its
    probability distribution. For example, {'a':1, 'b':2, c:'2'} returns {'a':0.5, 'b':0.25, 'c':0.25} """
    probabilities = {}
    total = 0
    for individual, amount in population.items():
        probabilities[individual] = 1.0 / amount
        total += probabilities[individual]
    for individual, prob in probabilities.items():
        probabilities[individual] = base * (prob / total)
    assert abs(1.0 - sum(probabilities.values())) <= FLOAT_PRECISION
    return probabilities

