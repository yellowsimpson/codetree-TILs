#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= i; j++){
            printf("%d", i);
        }
        printf("%d ", i);
    }

    return 0;
}
