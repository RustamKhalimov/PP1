#include <iostream>
#include <string>

using namespace std;

string removeVowels(string s) {
    string result;
    for (char c : s) {
        char lower_c = tolower(c);
        if (lower_c != 'a' && lower_c != 'e' && lower_c != 'i' && lower_c != 'o' && lower_c != 'u') {
            result += c;
        }
    }
    return result;
}

int main() {
    string s;
    getline(cin, s);
    cout << removeVowels(s);
    return 0;
}