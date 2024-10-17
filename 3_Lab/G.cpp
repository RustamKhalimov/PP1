#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    int maxElement = -1;
    int minElement = 1000000000;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == maxElement) {
            arr[i] = minElement;
        }
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}