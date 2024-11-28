M, N = [int(i) for i in input().split()]

a = M * N

if (a) % 2 == 0:
	p = a * 0.5
else:
	p = (a - 1) * 0.5
	
print(int(p))