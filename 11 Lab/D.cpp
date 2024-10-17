#include <iostream>
#include <vector>

bool isCoolMatrix(std::vector<std::vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < m - 1; ++j) {
            if (matrix[i][j] == matrix[i][j + 1] &&
                matrix[i][j] == matrix[i + 1][j] &&
                matrix[i][j] == matrix[i + 1][j + 1]) {
                return false; // Found a 2x2 square filled entirely with zeros or ones
            }
        }
    }

    return true; // No such 2x2 square found
}

int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<int>> matrix(n, std::vector<int>(m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    if (isCoolMatrix(matrix)) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }

    return 0;
}