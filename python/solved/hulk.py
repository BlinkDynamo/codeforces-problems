n = int(input())

_str = ""

for i in range(n):
    if i % 2:
        _str += ("I love that ")
    else:
        _str += ("I hate that ")

print(_str[:-5] + "it")

    
