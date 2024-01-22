# arr_2d = [
#     [1, 2, 3, 4], 
#     [7, 8, 9, 10], 
#     [11, 12, 13, 14], 
#     [15, 16, 17, 18]
# ]

# print(arr_2d[0][0]) # 1행 1열 : 1
# print(arr_2d[1][2]) # 2행 3열 : 9

# arr_2d = []
# for i in range(4):
#     arr = list(map(int, input().split()))
#     arr_2d.append(arr)

# arr_2d = []
# for _ in range(4):
#     arr_2d.append(list(map(int, input().split())))

arr_2d = [
    list(map(int, input().split()))
    for _ in range(4)
]

print(arr_2d) # [[1, 2, 3, 4], [7, 8, 9, 10], [11, 12, 13, 14], [15, 16, 17, 18]]