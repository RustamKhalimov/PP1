#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    unordered_map<char, int> countS;
    unordered_map<char, int> countT;

    for (char c : s) {
        countS[c]++;
    }

    for (char c : t) {
        countT[c]++;
    }

    if (countS == countT) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}