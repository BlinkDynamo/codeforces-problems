x = input()
luckynums = []

for i in x:
	if i == '4' or i == '7':
		luckynums.append(i)
		
if len(luckynums) == 4 or len(luckynums) == 7:
	print("YES")
else:
	print("NO")