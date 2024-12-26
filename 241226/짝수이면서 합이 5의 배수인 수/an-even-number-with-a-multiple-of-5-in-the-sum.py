n = int(input())

def page(n):
    return n % 2 == 0 and (n // 10 + (n % 10)) % 5 == 0

if page(n):
    print("Yes")
else:
    print("No")
