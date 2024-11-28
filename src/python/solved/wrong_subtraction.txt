# given integer n
# subtract 'one' from it k times
# task is to print k

n, k = [int(i) for i in input().split()]

for i in range(k):
	if n % 10:
		n -= 1
	else:
		n /= 10
		
print(int(n))