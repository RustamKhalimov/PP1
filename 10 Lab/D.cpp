#include <iostream>
#include <vector>
#include <algorithm>

// Function to calculate the sum of elements in a row
int rowSum(const std::vector<int>& row) {
    int sum = 0;
    for (int num : row) {
        sum += num;
    }
    return sum;
}

// Comparator function to sort the 2D vector
bool customComparator(const std::vector<int>& a, const std::vector<int>& b) {
    // Sort by sum of elements in rows
    int sumA = rowSum(a);
    int sumB = rowSum(b);
    if (sumA != sumB) {
        return sumA < sumB;
    }

    // Sort by size of rows
    if (a.size() != b.size()) {
        return a.size() < b.size();
    }

    // Sort by elements in rows
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return a[i] < b[i];
        }
    }

    // If all conditions are equal, maintain the original order
    return false;
}

int main() {
    int N;
    std::cin >> N;

    std::vector<std::vector<int>> matrix(N);
    for (int i = 0; i < N; ++i) {
        int M;
        std::cin >> M;
        matrix[i].resize(M);
        for (int j = 0; j < M; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    // Sorting the matrix using the customComparator
    std::sort(matrix.begin(), matrix.end(), customComparator);

    // Output the sorted matrix
    for (const auto& row : matrix) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}