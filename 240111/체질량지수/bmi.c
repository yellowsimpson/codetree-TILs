#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int 키, 몸무게;
    scanf("%d %d", &키, &몸무게);
    int BMI = 몸무게*100*100/(키*키);

    printf("%d", BMI);
    if(BMI >= 25){
        printf("Obesity");
    }
    return 0;
}