#include <stdio.h>

int main() {
    // Please write your code here.
    int a, b;
    int cnt = 0;

    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; i++){
        if(i % 2 == 0){
            cnt += i;
        }
    }
    printf("%d", cnt);
    return 0;
}