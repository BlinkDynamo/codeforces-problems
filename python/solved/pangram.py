n = int(input())

_str = input().lower()

alphabet = "abcdefghijklmnopqrstuvwxyz"

letters = ""

for i in range(n):
    # if letter has not been seen yet, append to letters
    if _str[i] not in letters:
        letters += _str[i]
    
# check if _str is a pangram or not
if len(letters) == len(alphabet):
    print("YES")
else:
    print("NO")


