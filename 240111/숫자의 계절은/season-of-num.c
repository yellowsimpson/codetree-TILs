#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d", &n);

    if(n >= 12 || n <= 2){
        printf("Winter");
    }else if(n <= 5){
        printf("Summer");
    }else if (n <= 8){
        printf("Fall");
    }else{
        printf("Winter");
    }

    return 0;
}