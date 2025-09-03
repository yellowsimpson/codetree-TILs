#include <stdio.h>

int main() {
    // Please write your code here.
    int n;
    scanf("%d", &n);

    if((n % 2 == 1 && n % 3 == 0 ) || (n % 2 == 0 && n % 5 == 0)){
            printf("true\n");
        }else{
            printf("false\n");
        }

    return 0;
}

