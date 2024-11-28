import math

x = 0
y = 0

for i in range(5):
	row = (input().split())
	
	if '1' in row:
		y = i
		if '1' in row:
			x = (row.index('1'))

distance = abs(2 - y) + abs(2 - x) 

print(distance)

	

	
