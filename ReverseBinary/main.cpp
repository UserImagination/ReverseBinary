#include <iostream>
using namespace std;

int main() {
    int x = 0;
    
    cin >> x;
    
    while (x > 0) {
        cout << x % 2;
        x /= 2;
    }
    cout << endl;
    return 0;
}

