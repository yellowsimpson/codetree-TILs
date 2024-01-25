'''
arr = [1, 5, 2, 5, 3, 9]

max_val = 0
for elem in arr:
    if elem > max_val:
        max<val = elem
print(max_val)
'''# 배열에 정수를 입력받습니다.
arr = list(map(int, input().split()))
	
max_val = arr[0]
	
# 10개의 숫자들 중 최댓값을 구합니다.
for elem in arr:
	if elem > max_val:
		max_val = elem
	
# 최댓값을 출력합니다.
print(max_val)