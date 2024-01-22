n = input()
arr = list(map(int, input().split))

new_arr = []
for elem in arr:
    new_arr.append(elem*elem)

for elem in new_arr:
    print(elem)