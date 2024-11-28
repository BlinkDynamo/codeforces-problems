t = int(input()) # number of test cases

for i in range(t):
    a, b = [int(i) for i in input().split()]   
    n = 0   # number of additions needed to make a divisible by basestring 
    
    if not a%b:
        print(0)
    else:
        print(b-a%b)