#include <stdio.h>

int main() {
    int a, b;
    char a1, b1;
    scanf("%d %c", &a, &a1);
    scanf("%d %c", &b, &b1);

    if((a >= 19 && a1 == 'M') || (b >= 19 && b1 == 'M')){
        printf("1");
    }else
        printf("0");
    return 0;
}