#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> total_grades(n, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int grade;
            cin >> grade;
            total_grades[i] += grade;
        }
    }

    int min_index = 0;
    for (int i = 1; i < n; i++) {
        if (total_grades[i] < total_grades[min_index]) {
            min_index = i;
        }
    }

    cout << min_index + 1 << endl;

    return 0;
}