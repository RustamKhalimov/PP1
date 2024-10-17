#include <bits/stdc++.h>
using namespace std;
int main() {
    int counter = 0;
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == s[i - 1] && s[i] == '1') {
            s.erase(s.begin()+i); 
            s.erase(s.begin()+i-1); 
            i--;
        }
    }
    for (auto x : s) {
        cout << x;
    }
    cout << "\n";
    return 0;
}