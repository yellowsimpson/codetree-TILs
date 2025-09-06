#include <stdio.h>
#include <string.h>

int main() {
    // Please write your code here.
    char text[100];
    scanf("%s", &text);

    int len = strlen(text);

    for(int i = 0; i < len; i ++)
        if(i == 1 || i == len - 2)
            printf("a");
        else 
            printf("%c", text[i]);
        
    return 0;
}



