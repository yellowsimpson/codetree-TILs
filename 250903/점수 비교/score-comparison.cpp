#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a_math, a_english;
    int b_math, b_english;

    cin >> a_math >> a_english;
    cin >> b_math >> b_english;
    
    if(a_math > b_math){
        if(a_english > b_english){
            cout << "1" <<endl;
        }else
            cout << "0" << endl;
    }else
        cout << "0" << endl;
    return 0;
}