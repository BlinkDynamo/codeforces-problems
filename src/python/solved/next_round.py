"""------------------------------------------------------------
filename: next_round.py
author: Josh Hayden
 
description: Given an input of n participants and k-th
placement, calculate how many participants will advance
to the next round. The first line contains n and k, and 
the second line contains n participants, each represented
by their score. 
 
regarding: https://codeforces.com/problemset/problem/158/A
-----------------------------------------------------------"""

# main function definition
def main():
    # take in initial values
    n_participants, k_place = [int(i) for i in input().split()]
    
    # create an array of participants
    arr_participants = [int(i) for i in input().split()]
    
    # counter for participants who will advance
    n_advancers = 0

    for participant in arr_participants:
        if participant >= arr_participants[int(k_place) - 1] and participant > 0:
            n_advancers += 1
        else:
            pass       
    print(n_advancers)

# main function call
if __name__ == "__main__":
    main()


