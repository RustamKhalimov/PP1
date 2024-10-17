#include <iostream>
#include <string>

using namespace std;
string isValidNumber(long long n) {
    string s = to_string(n);
    for (char c : s) {
        if ((c - '0') % 2 != 0) {
            return "Not valid";
        }
    }
    return "Valid";
}

int main() {
    long long n;
    cin >> n;
    cout << isValidNumber(n);
    return 0;
}