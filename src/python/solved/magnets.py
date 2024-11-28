from itertools import tee

n = int(input())
magnets = []

for i in range(n):
    magnet = input()
    magnets.append(magnet)

def pairwise(iterable):
    a, b = tee(iterable)
    next(b, None)
    return zip(a, b)

m = iter(magnets)

g = 1 # there will always be at least 1 group

for x, nxt in pairwise(m):
    if x != nxt:
        g += 1
    else:
        pass

print(g)

