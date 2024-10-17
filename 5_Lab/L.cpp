#include <iostream>
#include <string>

using namespace std;
int main() {
    string s;
    cin >> s;

    int n = s.length();
    bool increasing = true;

    for (int i = 1; i < n; i++) {
        if (s[i] < s[i - 1]) {
            increasing = false;
            break;
        }
    }

    if (increasing) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}