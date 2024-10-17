#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n][m];

    // Read the input array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // Transpose the array
    int transposed[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transposed[i][j] = a[j][i];
        }
    }

    // Output the transposed array
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << transposed[i][j];
            if (j < n - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

