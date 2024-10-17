#include <iostream>
#include <vector>

using namespace std;
int main() {
    int n;
    cin >> n; // Input n (size of the square matrix)

    vector<vector<int>> matrix(n, vector<int>(n));

    // Input the elements of the matrix
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    int sum = 0;

    // Calculate the sum of elements on the secondary diagonal
    for (int i = 0; i < n; ++i) {
        sum += matrix[i][n - i - 1];
    }

    // Output the sum
    cout << sum << endl;

    return 0;
}