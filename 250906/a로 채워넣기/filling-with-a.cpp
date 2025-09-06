#include <iostream>
#include <string.h>
using namespace std;

int main() {
    // Please write your code here.
    string text;
    cin >> text;

    int len = text.length();

    for(int i = 0; i < len; i++){
        if(i == 1 || i == len -2)
            cout << 'a';
        else
            cout << text[i];
    }


    return 0;
}
