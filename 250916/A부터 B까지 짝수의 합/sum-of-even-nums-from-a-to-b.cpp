#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b;
    int cnt = 0;

    cin >> a >> b;

    for(int i = a; i <= b; i++){
        if(i % 2 == 0){
            cnt += i;
        }
    }
    cout << cnt;
    return 0;
}