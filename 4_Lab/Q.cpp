#include <iostream>
 using namespace std;
int main() {
    int n;
    cin >> n; // Input n (height of the tree)

    // Loop to print the Christmas tree pattern
    for (int i = 0; i < n; ++i) {
        // Print spaces before the stars
        for (int j = 0; j < n - i - 1; ++j) {
            cout << ".";
        }

        // Print stars
        for (int k = 0; k < 2 * i + 1; ++k) {
            cout << "*";
        }

        // Print spaces after the stars
        for (int j = 0; j < n - i - 1; ++j) {
            cout << ".";
        }

        cout << endl;
    }

    return 0;
}