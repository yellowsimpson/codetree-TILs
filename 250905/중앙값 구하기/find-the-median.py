a, b, c = map(int, input().split())

if(a > b):
    if(a > c):
        if(b > c):
            print(f"{b}")
        else:
            print(f"{c}")
    else:
        print(f"{a}")
else:
    if(b > c):
        if(a > c):
            print(f"{a}")
        else:
            print(f"{c}")
    else:
        print(f"{b}")