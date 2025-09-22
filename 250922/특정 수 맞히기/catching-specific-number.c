// #include <stdio.h>

// int main() {
//     // Please write your code here.
//     int arr[100];

//     for(int i = 0; i < 100; i++){
//         scanf("%d\n", &arr[i]);

//         if(arr[i] < 25)
//             printf("Hihger\n");
//         else if(arr[i] > 25)
//             printf("Lower\n");
//         else
//             printf("Good\n");
//     }



//     return 0;
// }

#include <stdio.h>

int main() {
    while(1) {
        // 변수 선언 및 입력
        int n;
        scanf("%d", &n);
		
		// n이 25보다 작으면 Higher을, 25보다 크면 Lower을, 25와 같으면 Good을 출력한 뒤 종료합니다.
		if(n < 25)
			printf("Higher\n");
		
		else if(n > 25)
			printf("Lower\n");
		
		else {
			printf("Good\n");
			break;
		}
    }
	
    return 0;
}
