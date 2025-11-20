# Fibonacci Heap in python

import math

class FibonacciTree:
    def __init__(self, key):
        self.key = key
        self.children = []
        self.parent = None
        self.marked = False
        self.order = 0

    def add_at_end(self, t):
        self.children.append(t)
        t.parent = self
        self.order = self.order + 1

class FibonacciHeap:
    def __init__(self):
        self.trees = []
        self.least = None
        self.count = 0

    def insert(self, key):
        new_tree = FibonacciTree(key)
        self.trees.append(new_tree)
        if self.least is None or key < self.least.key:
            self.least = new_tree
        self.count += 1

    def get_min(self):
        if self.least is None:
            return None
        return self.least.key

    def extract_min(self):
        smallest = self.least
        if smallest is not None:
            for child in smallest.children:
                child.parent = None
                self.trees.append(child)
            self.trees.remove(smallest)
            if not self.trees:
                self.least = None
            else:
                self.least = self.trees[0]
                self.consolidate()
            self.count -= 1
            return smallest.key

    def consolidate(self):
        aux = (floor_log2(self.count) + 1) * [None]
        while self.trees:
            x = self.trees[0]
            order = x.order
            self.trees.remove(x)
            while aux[order] is not None:
                y = aux[order]
                if x.key > y.key:
                    x, y = y, x
                x.add_at_end(y)
                aux[order] = None
                order += 1
            aux[order] = x
        self.least = None
        for k in aux:
            if k is not None:
                self.trees.append(k)
                if self.least is None or k.key < self.least.key:
                    self.least = k

    def decrease_key(self, x, new_key):
        if new_key > x.key:
            raise ValueError("New key is greater than current key")
        x.key = new_key
        y = x.parent
        if y is not None and x.key < y.key:
            self.cut(x, y)
            self.cascading_cut(y)
        if x.key < self.least.key:
            self.least = x

    def cut(self, x, y):
        y.children.remove(x)
        y.order -= 1
        x.parent = None
        x.marked = False
        self.trees.append(x)

    def cascading_cut(self, y):
        z = y.parent
        if z is not None:
            if not y.marked:
                y.marked = True
            else:
                self.cut(y, z)
                self.cascading_cut(z)

    def delete(self, x):
        self.decrease_key(x, float('-inf'))
        self.extract_min()

def floor_log2(x):
    return math.frexp(x)[1] - 1

fheap = FibonacciHeap()

fheap.insert(11)
fheap.insert(10)
fheap.insert(39)
fheap.insert(26)
fheap.insert(24)

print('Minimum value: {}'.format(fheap.get_min()))
print('Minimum value removed: {}'.format(fheap.extract_min()))