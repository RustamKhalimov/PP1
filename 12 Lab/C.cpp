#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    unordered_set<int> element;
    int result = 0;
    for (int i = 0; i < n; ++i) {
    result ^= arr[i];
    element.insert(arr[i]);
}
    bool power = (result & (result - 1)) == 0;
    if (power) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}