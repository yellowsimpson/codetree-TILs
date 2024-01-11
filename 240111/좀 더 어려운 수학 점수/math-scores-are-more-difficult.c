#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int Am, Ae;
    int Bm, Be;
    scanf("%d %d\n %d %d", &Am, &Ae, &Bm, &Be);

    if(Am > Bm){
        printf("A");
    }else if(Am == Bm || Ae > Be){
        printf("A");
    }else
        printf("B");
   return 0;
}