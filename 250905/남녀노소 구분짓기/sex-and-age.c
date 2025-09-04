#include <stdio.h>

int main() {
    // Please write your code here.
    int sex, age;
    scanf("%d\n%d", &sex, &age);

    if(sex == 0){
        if(age >= 19)
            printf("MAN\n");
        else
            printf("BOY\n");
    }
    else{
        if(age >= 19)
            printf("WOMAN\n");
        else
            printf("GIRL\n");
    }

    return 0;
}