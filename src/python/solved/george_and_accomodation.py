n = int(input())

a = 0   # available rooms

for i in range(n):
    occ, cap = [int(j) for j in input().split()]
    if (cap - occ) >= 2:
        a += 1
print(a)
    
