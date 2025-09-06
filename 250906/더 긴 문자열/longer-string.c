#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char text1[100], text2[100];
    scanf("%s %s", &text1, &text2);

    int len1 = strlen(text1);
    int len2 = strlen(text2);
    
    if(len1 > len2){
        printf("%s %d", text1, len1);
    }else if(len2 > len1)
        printf("%s %d", text2, len2);
    else
        printf("same");

    return 0;
}
