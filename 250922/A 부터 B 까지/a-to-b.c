// #include <stdio.h>

// int main() {
//     // Please write your code here.
//     int a, b;
//     int cnt = 0;
//     scanf("%d %d", &a, &b);

//     while(1){
//         for(int i = a; i <= b; i++){
//             if(a % 2 == 0)
//                 printf("%d\n", a + 3);
//                 i = a + 3;
//             else if(a % 2 != 0)
//                 printf("%d\n", a * 2);
//                 i = a * 2;
//             else
//                 continue;
//         }

//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    // 변수 선언
    int a, b;

    // 입력
    scanf("%d %d", &a, &b);

    // for문 사용
    for(int i = a; i <= b; ) {
        printf("%d ", i);
        if(i % 2 == 1)
            i *= 2;   // 홀수면 2배
        else
            i += 3;   // 짝수면 +3
    }

    return 0;
}
