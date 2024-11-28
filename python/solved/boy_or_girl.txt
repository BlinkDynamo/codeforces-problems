string = input()

unique_chars = []

for char in string:
	if char not in unique_chars:
		unique_chars.append(char)
		
if (len(unique_chars)) % 2:
	print("IGNORE HIM!")
else:
	print("CHAT WITH HER!")


