#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // 중앙값 찾기
    int middle;

    if ((a >= b && a <= c) || (a <= b && a >= c)) {
        middle = a;
    } else if ((b >= a && b <= c) || (b <= a && b >= c)) {
        middle = b;
    } else {
        middle = c;
    }

    // 중앙값 출력
    printf("%d", middle);

    return 0;
}