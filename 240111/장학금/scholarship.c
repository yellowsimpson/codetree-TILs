#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    if(n >= 95){
        printf("100000");
    }else if(n >=90){
        printf("50000");
    }else
        printf("0");

    return 0;
}