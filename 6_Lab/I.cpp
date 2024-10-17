#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string capitalizeEven(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (i % 2 == 0) {
            s[i] = toupper(s[i]);
        }
    }
    return s;
}

int main() {
    string s;
    cin >> s;
    cout << capitalizeEven(s);
    return 0;
}