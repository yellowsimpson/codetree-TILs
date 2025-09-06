#include <iostream>
#include <string.h>
using namespace std;

int main() {
    // Please write your code here.
    string text1, text2;
    cin >> text1 >> text2;

    int len1 = text1.length();
    int len2 = text2.length();
    
    if(len1 > len2){
        cout << text1 << " " << len1 << endl;
    }else if(len2 > len1){
        cout << text2 << " " << len2 << endl;
    }else
        cout << "same";
    return 0;
}