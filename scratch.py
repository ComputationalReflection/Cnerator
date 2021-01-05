import json
import cnerator


class Literal:
    def __init__(self, piki_wiki):
        self.string = piki_wiki

    def __eq__(self, other):
        return self.string == other.string

l1 = Literal("hello")
l2 = Literal("hello")

print(l1 in [l2])
