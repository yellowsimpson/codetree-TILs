a, b, c = tuple(map(int, input().split()))

def find_min(a, b, c):
    min_val = a
    if min_val > b:
        min_val = b
    if min_val > c:
        min_val = c
    
    return min_val

print(find_min(a, b, c))
