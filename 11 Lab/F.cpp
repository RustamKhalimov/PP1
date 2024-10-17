#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, k;
    cin >> a >> b >> k;
    vector <int> li;
    for (int i = 1; i <= min(a, b); ++i) {
        if (a % i == 0 && b % i == 0) li.push_back(i);
    }
    sort(li.rbegin(), li.rend());
    cout << li[k-1];
}
