#include <stdio.h>

int main() {
    // Please write your code here.
    int a, b;
    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; i++){
        printf("%d ", b - i);
    }

    return 0;
}
