#include <iostream>
#include <string>
using namespace std;

bool isValidString(string s, int n) {
    int consecutive_digits = 0;

    for (char c : s) {
        if (isdigit(c)) {
            consecutive_digits++;
            if (consecutive_digits >= n) {
                return true;  
            }
        } else {
            consecutive_digits = 0;
        }
    }

    return false;
}

int main() {
    string s;
    int n;
    cin >> s >> n;

    if (isValidString(s, n)) {
        cout << "Valid" << endl;
    } else {
        cout << "Not valid" << endl;
    }

    return 0;
}
