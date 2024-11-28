colors = input().split()

n_unique_horshoes = len(set(colors))

n_to_buy = len(colors) - n_unique_horshoes

print(n_to_buy)
