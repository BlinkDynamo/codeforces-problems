n = int(input())
while n > 0:
	line = input()

	if len(line) > 10:
		middle_length = len(line) - 2
		print(line[0] + str(middle_length) + line[-1])
	else:
		print(line)
	n -= 1
	