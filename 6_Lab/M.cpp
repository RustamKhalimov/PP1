#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Print the array in reverse order
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i];
        if (i > 0) {
            cout << " "; // Print a space to separate elements, except for the last element
        }
    }

    cout << endl;

    return 0;
}
