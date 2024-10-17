#include <iostream>
#include <string>

using namespace std;

string shiftAlphabetCharacters(const string& str) {
    string result = str;

    for (char& c : result) {
        if (c >= 'a' && c < 'z') {
            c++;
        } else if (c == 'z') {
            c = 'a';
        }
    }

    return result;
}

int main() {
    string s;
    cin >> s;

    string shiftedString = shiftAlphabetCharacters(s);

    cout << shiftedString << endl;

    return 0;
}