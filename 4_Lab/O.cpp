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

    int maxElement = matrix[0][0];
    int maxRow = 0;
    int maxCol = 0;

    // Find the maximum element on the main diagonal
    for (int i = 0; i < n; ++i) {
        if (matrix[i][i] > maxElement) {
            maxElement = matrix[i][i];
            maxRow = i;
            maxCol = i;
        }
    }

    // Output the maximum element and its coordinates
    cout << "Maximum element is: " << maxElement << " with coordinates: " << (maxRow + 1) << ";" << (maxCol + 1) << endl;

    return 0;
}