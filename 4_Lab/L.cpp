#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    // Create a 2D array to store the matrix.
    int matrix[n][m];

    // Read the matrix from the input.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    // Find the sum of the smallest elements of each column and their coordinates.
    int min_sum = 0;
    int min_coordinates[m][2]; // [row][column]
    for (int j = 0; j < m; j++) {
        int min_element = matrix[0][j];
        int min_row = 0;
        for (int i = 1; i < n; i++) {
            if (matrix[i][j] < min_element) {
                min_element = matrix[i][j];
                min_row = i;
            }
        }
        min_sum += min_element;
        min_coordinates[j][0] = min_row + 1;
        min_coordinates[j][1] = j + 1;
    }

    // Print the sum of the smallest elements of each column and their coordinates.
    cout << "coordinates of min elements:" << endl;
    for (int j = 0; j < m; j++) {
        cout << min_coordinates[j][0] << ";" << min_coordinates[j][1] << endl;
    }
    cout << endl;

    cout << "Their sum:" << endl;
    cout << min_sum << endl;

    return 0;
}