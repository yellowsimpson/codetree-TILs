#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i = 0; i <= 4; i++){
        n += n;
        cout << n << endl;
    }
    return 0;
}

