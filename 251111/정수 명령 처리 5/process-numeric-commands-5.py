N = int(input())

command = []
num = []

for _ in range(N):
    line = input().split()
    command.append(line[0])
    if line[0] == "push_back" or line[0] == "get":
        num.append(int(line[1]))
    else:
        num.append(0)

# Please write your code here.
arr = []

for i in range(N):
    cmd = command[i]
    val = num[i]

    if cmd == "push_back":
        arr.append(val)
    elif cmd == "pop_back":
        if arr:           # 비어있지 않으면 삭제
            arr.pop()
    elif cmd == "size":
        print(len(arr))
    elif cmd == "get":
        if 1 <= val <= len(arr):
            print(arr[val - 1])

