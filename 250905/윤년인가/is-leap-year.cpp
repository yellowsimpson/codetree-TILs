#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int Y;
    cin >> Y;

    if(Y % 4 == 0){
        if(Y % 100 == 0 && Y % 400 != 0)
            cout << "false" << endl;
        else
            cout << "true" << endl;
    }else
        cout << "false" << endl;

    return 0;
}