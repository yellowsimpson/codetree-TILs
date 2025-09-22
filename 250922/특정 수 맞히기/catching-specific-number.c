// #include <stdio.h>

// int main() {
//     // Please write your code here.
//     int arr[100];

//     for(int i = 0; i < 100; i++){
//         scanf("%d\n", &arr[i]);
//     }

//     if(arr[i] < 25)
//         printf("Hihger");
//     else if(arr[i] > 25)
//         printf("Lower");
//     else
//         printf("Good");

//     return 0;
// }


#include <stdio.h>

int main() {
    int x;

    // 입력이 끝날 때까지 반복
    while (scanf("%d", &x) != EOF) {
        if (x < 25)
            printf("Higher\n");
        else if (x > 25)
            printf("Lower\n");
        else
            printf("Good\n");
    }

    return 0;
}
