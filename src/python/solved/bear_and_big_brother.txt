# Limak = a
# Bob = b
# b >= a
# every year, a * 3, while b * 2

a, b = [int(i) for i in input().split()]

y = 0	# years
while a <= b:
	a *= 3
	b *= 2
	y +=1
	
print(y)
	
	