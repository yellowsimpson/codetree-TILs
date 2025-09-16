#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    int sum = 0;
    scanf("%d", &n);

    for(int i = 1; i <= 100; i++){
        sum += i;
        if(sum >= n){
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
