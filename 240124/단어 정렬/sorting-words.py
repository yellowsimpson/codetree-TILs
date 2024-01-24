#1.정렬
n = int(input())
words = [input() for _ in range(n)]

#정렬하기
words.sort()

for word in words:
    print(word)