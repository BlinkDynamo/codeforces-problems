"""------------------------------------------------------------
filename: anton_and_danik.py
author: Josh Hayden
 
description:  
 
regarding: https://codeforces.com/problemset/problem/734/A
-----------------------------------------------------------"""

# main function definition
def main():
    n = int(input())
    str = input()

    a=0
    d=0

    for char in str:
        if char == 'A':
            a+=1
        else:
            d+=1
            
    if a>d:	
        print("Anton")
    elif d>a:
        print("Danik")
    else:
        print("Friendship")
        return 0

# main function call
if __name__ == "__main__":
    main()	
