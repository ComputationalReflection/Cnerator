#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
These functions are used to define the probability of the different syntax constructs of the C language.
Probabilities are defined as Dict[object, float], where the key are the different values to be generated and the
content defines the probability for each one.
All the probabilities (contents of the dictionary) must sum 0.0.
"""

import random
from typing import Dict, List
import numpy as np


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


def compute_normal_prob(mean: int, stdev: int, base: float = 1.0, number: int = 30) -> Dict[object, float]:
    """Given the mean and standard deviation, returns a dictionary a normal distribution"""
    float_values = np.random.normal(mean, stdev, size=number)
    int_values = [int(float_value) for float_value in float_values]
    frequencies = {int_value: int_values.count(int_value) for int_value in int_values}
    return compute_proportional_prob(frequencies, base)


