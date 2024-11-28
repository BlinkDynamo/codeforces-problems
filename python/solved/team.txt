n = input()
solutions = 0

for n in range(int(n)):
	p, v, t = input().split()
	if int(p) + int(v) + int(t) >= 2:
		solutions += 1
print(solutions)

		