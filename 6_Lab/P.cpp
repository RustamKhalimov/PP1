#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int absoluteValue;

    if (n < 0) {
        absoluteValue = -n; // Convert negative number to positive
    } else {
        absoluteValue = n; // Positive number remains the same
    }

    cout << absoluteValue << endl;

    return 0;
}
