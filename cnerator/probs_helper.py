import random


FLOAT_PRECISION = 1e-8


def random_value(probabilities):
    if abs(sum(probabilities.values()) - 1.0) > FLOAT_PRECISION:
        raise Exception("Probability must sum 1")
    rand = random.random()
    summation = 0
    for key, value in probabilities.items():
        if summation <= rand < summation + value:
            return key
        summation += value
    return probabilities[probabilities.keys()[-1]]


def compute_equal_prob(keys, base=1.0):
    probabilities = {}
    for key in keys:
        probabilities[key] = base * (1.0 / len(keys))
    return probabilities


def compute_proportional_prob(population, base=1.0):
    probabilities = {}
    total = float(sum(population.values()))
    for individual, amount in population.items():
        probabilities[individual] = base * (amount / total)
    assert abs(1.0 - sum(probabilities.values())) <= FLOAT_PRECISION
    return probabilities


def compute_inverse_proportional_prob(population, base=1.0):
    probabilities = {}
    total = 0
    for individual, amount in population.items():
        probabilities[individual] = 1.0 / amount
        total += probabilities[individual]
    for individual, prob in probabilities.items():
        probabilities[individual] = base * (prob / total)
    assert abs(1.0 - sum(probabilities.values())) <= FLOAT_PRECISION
    return probabilities


def fill_the_gap(probabilities, total=1.0):
    accum = 0
    target = None
    for key, value in probabilities.items():
        if value is not None:
            accum += value
        else:
            target = key
    probabilities[target] = total - accum
    return probabilities
