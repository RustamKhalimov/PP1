#include <iostream>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  // Create a 2D array to store the input.
  int array[n][m];

  // Read the input array.
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> array[i][j];
    }
  }

  // Calculate the sum of the elements in each row and column.
  int row_sum[n];
  int column_sum[m];
  for (int i = 0; i < n; i++) {
    row_sum[i] = 0;
    for (int j = 0; j < m; j++) {
      row_sum[i] += array[i][j];
    }
  }
  for (int j = 0; j < m; j++) {
    column_sum[j] = 0;
    for (int i = 0; i < n; i++) {
      column_sum[j] += array[i][j];
    }
  }

  // Print the sum of the elements in each row and column.
  for (int i = 0; i < n; i++) {
    cout << "The sum of row number " << i + 1 << " is " << row_sum[i] << endl;
  }
  for (int j = 0; j < m; j++) {
    cout << "The sum of column number " << j + 1 << " is " << column_sum[j] << endl;
  }
  cout << endl;

  return 0;
}