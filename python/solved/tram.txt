# n number of stops
# exit, enter on next line
# c current capacity
# h highest capacity

n = int(input())

c = 0
h = 0

for i in range(n):

	exit, enter = [int(i) for i in input().split()]
	
	if c - exit >= 0:	# capacity updated if amount exiting does not result in a negative number
		c -= exit
	else:
		c = 0	# if it does, result will be zero regardless 
		
	c += enter
	
	if h<c:
		h = c
		
print(h)
		
		
	
	
	