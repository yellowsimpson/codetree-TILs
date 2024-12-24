def sum_div_10(n):
    # 1부터 n까지의 합
    total = sum(range(1, n + 1))
    # 10으로 나눈 몫을 반환
    return total // 10

def main():
    # 사용자로부터 정수 입력
    n = int(input())
    # 함수 호출 후 결과 출력
    print(sum_div_10(n))

# 실제 실행 시점
if __name__ == "__main__":
    main()
