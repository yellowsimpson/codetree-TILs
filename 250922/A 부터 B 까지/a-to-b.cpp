#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b, i;
    cin >> a >> b;

    i = a;
    while(i <= b){
        cout << i << " ";
        if(i % 2 == 0)
            i += 3;
        else
            i *= 2;
    }

    return 0;
}