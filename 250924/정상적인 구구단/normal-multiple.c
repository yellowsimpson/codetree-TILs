// #include <stdio.h>

// int main() {
//     // Please write your code here.
//     int n;
//     scanf("%d", &n);

//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n; j++){
//             printf("%d * %d = %d ", i, j, i * j);
//             if(j < n) {
//             printf(", ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            printf("%d * %d = %d", i, j, i * j);
            if(j < n) {  // 마지막이 아닐 때만 , 출력
                printf(", ");
            }
        }
        printf("\n");
    }
    return 0;
}
