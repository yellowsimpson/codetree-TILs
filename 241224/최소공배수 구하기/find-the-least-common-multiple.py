import math

def lcm(a, b):
    return abs(a*b) // math.gcd(a, b)  # LCM(a, b) = (a*b) / GCD(a, b)

def main():
    x, y = map(int,(input().split()))
    print(f"{lcm(x, y)}")

if __name__ == "__main__":
    main()
