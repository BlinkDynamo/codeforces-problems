year = int(input())	# always starts with a distinct year

while True:
	u_n = 0		# unique nums
	year += 1	
	year_list = [int(x) for x in str(year)]
	
	for num in year_list:
		if year_list.count(num) == 1: 
			u_n += 1
		else:
			continue
			
	if u_n == len(year_list):	# if all nums in year_list are unique
		print(year)
		break
	else:
		continue
			
	


		
	