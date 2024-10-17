#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    cin >> s;

    for (char &c : s) {
        if (islower(c)) {
            c = toupper(c);
        }
    }

    cout << s << endl;

    return 0;
}