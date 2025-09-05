// #include <stdio.h>

// int main() {
//     // Please write your code here.
//     int a, b;
//     int arr[100];
//     int sum = a + b;
//     scanf("%d %d", &a, &b);

//     for(int i = 2; i < 10; i ++){
//         arr[i] = ;
//     }

//     for(int i = 0; i <= 8; i++){
//         printf(" %d", arr[i] + arr[i+1]);
    
//     }

//     return 0;
// }


#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int arr[10];
    arr[0] = a;
    arr[1] = b;

    for (int i = 2; i < 10; i++) {
        arr[i] = (arr[i-1] + arr[i-2]) % 10; // 합의 1의 자리
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
