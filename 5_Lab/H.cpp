#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    string s;
    cin >> s;

    unordered_map<char, int> digitCount;

    for (char c : s) {
        if (isdigit(c)) {
            digitCount[c]++;
        }
    }

    bool isDigitCountEqual = true;
    int firstCount = -1;

    for (const auto& pair : digitCount) {
        if (firstCount == -1) {
            firstCount = pair.second;
        } else if (pair.second != firstCount) {
            isDigitCountEqual = false;
            break;
        }
    }

    if (isDigitCountEqual) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}