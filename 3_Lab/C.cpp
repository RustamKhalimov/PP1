#include <iostream>
using namespace std;

int main() {
    int n;
    int highNum = -99999999;
    int b;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> b;
        if (b > highNum) {
            highNum = b;
        }
    }
    
    cout << highNum << endl;
    
    return 0;
}