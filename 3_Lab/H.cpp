#include <iostream>
using namespace std;

int main() {
    int n, l, r;
    cin >> n >> l >> r;

    long long sum = 0;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = l - 1; i <= r - 1; i++) {
        sum += arr[i];
    }

    cout << sum << endl;

    return 0;
}