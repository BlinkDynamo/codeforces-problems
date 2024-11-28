# different becomes 1 in output, same becomes 0 in output

a = input()
b = input()
c = ''


for (i,j) in zip(a, b):
    if i != j:
        c+='1'
    else:
        c+='0'

print(c)
        

        
