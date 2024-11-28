n = 0	# steps
a = 0   # start coord

a = int(input())

n = (a / 5)

if a % 5:
	n += 1
	
print(int(n))