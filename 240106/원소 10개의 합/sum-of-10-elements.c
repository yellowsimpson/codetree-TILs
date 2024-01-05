#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int array[10];
    int sum = 0;

    for(int i = 0; i < 10; i++){
        sum += array[i];
    }

    printf("%d", sum);
    return 0;
}