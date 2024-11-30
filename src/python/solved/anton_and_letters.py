
"""------------------------------------------------------------
filename: anton_and_letters.py
author: Josh Hayden
 
description:  
 
regarding: https://codeforces.com/problemset/problem/443/A
-----------------------------------------------------------"""

# main function definition
def main():
    list = input()
    seen_list = []
    for char in list:
        if (char.isalpha):
            if (char not in seen_list):
                seen_list.append(char)
            else:
                continue

    print(len(seen_list))
    return 0

# main function call
if __name__ == "__main__":
    main()
