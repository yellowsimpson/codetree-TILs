#include <stdio.h>

int main() {
    // Please write your code here.
    int n, a, b;
    scanf("%d", &n);


    for(int i = 0; i < n; i++){
        scanf("%d %d\n", &a, &b);
        int sum = 0;
        for(int i = a; i <= b; i++){
            if(i % 2 == 0){
                sum += i;   
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}
