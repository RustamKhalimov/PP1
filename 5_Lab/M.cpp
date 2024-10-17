#include <iostream>
#include <string>

using namespace std;

int countCharacter(const string& str, char x) {
    int count = 0;
    for (char c : str) {
        if (c == x) {
            count++;
        }
    }
    return count;
}

int main() {
    string s;
    char x;
    int n;
    cin >> s >> x >> n;

    int characterCount = countCharacter(s, x);

    if (characterCount == n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}