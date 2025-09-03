#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    cout << n;
    for(int i = 0; i <= 3; i++){
        n += n;
        cout << n << " " ;
    }

    return 0;
}

