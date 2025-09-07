#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d", &n);

    int count = 0;
    for(int i = 0; i <= n; i++){
        if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0){
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}