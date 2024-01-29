arr = input().split()
a, b = int(arr[0]), int(arr[1])

print(a * b)

map(변환하는 함수, 리스트)

list(map(int, arr))

arr = input().split()
arr = list(map(int, arr))
a, b = arr[0]




tuple() 값이 바뀌지 않음
list() 값이 바뀔수 있음

arr = input().split()


arr = list(map(int, input().split()))
a, b = arr
print(a * b)