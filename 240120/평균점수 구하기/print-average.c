#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    double arr[8];

    double sum = 0;

    for(int i = 0; i < 8; i++){
        scanf("%lf", &arr[i]);
    }
    
    for(int i = 0; i < 8; i++){
        sum += arr[i];
    }

    printf("%.1lf", sum / 8);

    return 0;
}