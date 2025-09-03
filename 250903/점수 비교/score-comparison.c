#include <stdio.h>

int main() {
    // Please write your code here.
    int a_math, a_english;
    int b_math, b_english;
    scanf("%d %d", &a_math, &a_english);
    scanf("%d %d", &b_math, &b_english);

    if(a_math > b_math){
        if(a_english > b_english){
            printf("1");
        }else
            printf("0");
    }else
        printf("0");
    return 0;
}