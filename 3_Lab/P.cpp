#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x;
    cin >> x;

    int root = sqrt(x);

    if (root * root == x) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}