#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); ++i)
#define all(x) (x).begin(), (x).end()

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    
    rep(i, 0, n) cin >> v[i];
    
    sort(all(v));
    
    vector<int> nv;
    int bp = 0, sbp = -2e9;

    for (int i = 0; i < n; ) {
        if (i + 1 < n && v[i] == v[i + 1]) {
            i += 2;
            nv.push_back(v[i - 2]);
        } else {
            bp++, i++;
            if (sbp == -2e9) sbp = v[i - 1];
        }
    }

    if ((n % 2 == 0 && bp > 0) || bp > 1) {
        puts("Impossible");
        return 0;
    }

    for (int i = 0; i < static_cast<int>(nv.size()); i++) {
        cout << nv[i] << ' ';
    }

    if (n % 2 == 1) {
        cout << sbp << ' ';
    }

    for (int i = static_cast<int>(nv.size()) - 1; i > -1; i--) {
        cout << nv[i] << ' ';
    }

    return 0;
}
