// #include <stdio.h>

// int main() {
//     // Please write your code here.
//     int a;
//     scanf("%d", &a);

//     if(a > 0){
//         printf("even");
//     }
//     else
//         printf("%d\nminus", a);
//     return 0;
// }

#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);


    if(a < 0){
        printf("%d\nminus", a);
    }
    else
        printf("%d", a);
    return 0;
}