# h maximum height to go unnoticed
# if above 5, must bend over
# width of standing 1, width of bent over 2

n, h = [int(i) for i in input().split()]	# (N)umber of friends, (H)eight of wall

# make a list a[i] which stores the height of the (i)th friend
a = [int(i) for i in input().split()]	

# w is min-width needed for all friends to walk on the road
w = 0
for i in a:
	if i > h:
		# friend must bend over
		w += 2
	else:
		w += 1
		
print(w)
