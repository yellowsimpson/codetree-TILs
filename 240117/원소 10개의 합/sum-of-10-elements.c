#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[10];
    int sum = 0;

    for(int i = 0; i < 9; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 9; i++){
        sum += arr[i];
    }

    printf("%d", sum);
    return 0;
}