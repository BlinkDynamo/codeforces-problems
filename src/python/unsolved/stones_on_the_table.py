"""------------------------------------------------------------
filename: stones_on_the_table.py
author: Josh Hayden
 
description: Given n stones on a table in a row, return the
minimum number of stones that would be needed to be removed
to make every stone be adjacent to a stone with a different
color than it's own (stones are red, green, or blue written
as characters R, G, and B).
 
regarding: https://codeforces.com/problemset/problem/266/A
-----------------------------------------------------------"""

# main function definition
def main():
	# take in n_stones and arr_stones
    n_stones = int(input())
    arr_stones = input().split()
    
    # variable to count the number of alike pairs
    n_pairs = 0

    for stone_index, stone_value in enumerate(arr_stones):
        if stone_index == len(arr_stones) - 1:
            break
        elif stone_value == arr_stones[stone_index + 1]:
            n_pairs += 1
    
    print(n_pairs)
    return 0

# main function call
if __name__ == "__main__":
    main()
