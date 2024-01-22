_ = input() #입력 받았지만 안쓸때 변수 _로 표시
arr = list(map(int, input().split()))

new_arr = []
for elem in arr:
    new_arr.append(elem * elem)

for elem in new_arr:
    print(elem, end = " ")