#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int gcd1(int arr[], int n) {
    int gcd2 = 0;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int gcd3 = gcd(arr[i], arr[j]);
            gcd2 = max(gcd2, gcd3);
        }
    }
    return gcd2;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int gcd2 = gcd1(arr, n);
    cout << gcd2 << endl;
    return 0;
}