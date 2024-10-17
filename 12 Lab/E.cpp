#include <bits/stdc++.h>
using namespace std;
void v(int n) {
    if (n == 0) {
        cout << '0' << endl;
        return;
    }
    string s;
    while (n > 0) {
        int remainder = n % 16;
char b = (remainder < 10) ? (char)(remainder + '0') : (char)(remainder - 10 + 'A');
        s.push_back(b);
        n /= 16;
    }
    reverse(s.begin(), s.end());

    cout << s << endl;
}
int main() {
    int n;
    cin >> n;
    v(n);
    return 0;
}