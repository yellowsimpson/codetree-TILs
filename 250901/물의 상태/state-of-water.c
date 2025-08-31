#include <stdio.h>

int main() {
    // Please write your code here.
    int a;

    scanf("%d", &a);

    if(a < 0){
        printf("ice");
    }else if(a >= 0 || a < 100){
        printf("water");
    }else{
        printf("vapor");
    }

    return 0;
}