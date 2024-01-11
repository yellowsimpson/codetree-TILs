#include <stdio.h>

int main() {
    int age1, age2;
    char gender1, gender2;

    // 첫 번째 사람 정보 입력
    scanf("%d %c", &age1, &gender1);

    // 두 번째 사람 정보 입력
    scanf("%d %c", &age2, &gender2);

    // 한 사람이라도 19세 이상이면서 남자인 경우 1 출력, 그 외에는 0 출력
    if ((age1 >= 19 && gender1 == 'M') || (age2 >= 19 && gender2 == 'M')) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}