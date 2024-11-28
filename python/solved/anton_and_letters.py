list = input()

seen_list = []

for char in list:
    if (char.isalpha):
        if (char not in seen_list):
            seen_list.append(char)
        else:
            continue
            
 
print(len(seen_list))


