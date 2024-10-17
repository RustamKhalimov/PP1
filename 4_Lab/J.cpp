#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int array[n][m];

    // Read the array from the input.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> array[i][j];
        }
    }

    // Add 1 to shells where i + j is even, and subtract 1, if i + j is odd.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ((i + j) % 2 == 0) {
                array[i][j]++;
            } else {
                array[i][j]--;
            }
        }
    }

    // Print the modified array to the output.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}