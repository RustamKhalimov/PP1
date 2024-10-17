#include <iostream>
#include <string>

using namespace std;


string isValidString(string s, int n) {
    int count = 0;
    for (char c : s) {
        if (isdigit(c)) {
            count++;
        }
    }
    return count >= n ? "YES" : "NO";
}

int main() {
    string s;
    int n;
    cin >> s >> n;
    cout << isValidString(s, n);
    return 0;
}