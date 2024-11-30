# k is the dollar cost. Bananas cost i*k for each banana
# n is dollars he has
# w is amount wanted
# b is amount borrowed
# p is cost of buying amount

p = 0
k, n, w = [int(i) for i in input().split()]

for i in range(w):
	p += (i+1)*k
if p > n:
	print(p - n)
else: 
	print(0)
	