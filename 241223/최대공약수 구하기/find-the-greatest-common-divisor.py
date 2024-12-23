n, m = int(input().split())

def greatest_common_measure(n, m):
    gcm = 0
    for i in range(1, min(n, m) + 1):
        if n % i == 0 and m % i ==0:
            gcm = i

        print(gcm)

greatest_common_measure(n, m)
