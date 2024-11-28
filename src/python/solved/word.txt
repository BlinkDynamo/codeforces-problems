str = input()

n_upper = 0
n_lower = 0

for char in str:
	if char.isupper():
		n_upper += 1
	else:
		n_lower += 1
		
if n_upper > n_lower:
	str = str.upper()
else:
	str = str.lower()
	
print(str)