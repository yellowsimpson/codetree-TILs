// #include <stdio.h>

// int main() {
//     // Please write your code here.
//     int arr[100];

//     for(int i = 0; i < n; i++){
//         scnaf("%d", &arr[100]);
//     }

//     if(int i % 3 == 0 || i % 5 == 0){

//     }


//     return 0;
// }


#include <stdio.h>

int main() {
    int num;
    int cnt3 = 0, cnt5 = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        if (num % 3 == 0) cnt3++;
        if (num % 5 == 0) cnt5++;
    }

    printf("%d %d\n", cnt3, cnt5);
    return 0;
}
