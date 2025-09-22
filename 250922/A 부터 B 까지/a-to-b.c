//M1
// #include <stdio.h>

// int main() {
//     // 변수 선언
//     int a, b, i;

//     // 입력
//     scanf("%d %d", &a, &b);
    
//     i = a;
    
//     // 출력
//     while(i <= b) {
//         printf("%d ", i);
//         if(i % 2 == 1)
//             i *= 2;
//         else
//             i += 3;
//     }

//     return 0;
// }



//M2
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
