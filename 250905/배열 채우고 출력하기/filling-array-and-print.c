// #include <stdio.h>
// #include <string.h>

// int main() {
//     // Please write your code here.
//     char arr[100];
//     scanf("%s", arr);

//     int len = strlen(arr);

//     for(int i = len - 1; i >= 0; i--){
//         printf("%c", arr[i]);
//     }

//     return 0;
// }
#include <stdio.h>

int main(void) {
    char buf[1005];   // 충분히 크게
    int n = 0;
    int ch;

    // 한 줄을 문자 단위로 읽으면서 공백은 건너뜀
    while ((ch = getchar()) != EOF && ch != '\n') {
        if (ch != ' ') buf[n++] = (char)ch;
    }

    // 역순 출력
    for (int i = n - 1; i >= 0; --i) {
        putchar(buf[i]);
    }
    putchar('\n');
    return 0;
}
