#include <iostream>
#include <string>

using namespace std;

int countVowels(const std::string& str) {
    int count = 0;
    for (char c : str) {
        if (c == 'a' or  c == 'e' or  c == 'i' or  c == 'o' or  c == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    string s;
    cin >> s;

    int vowelCount = countVowels(s);

    cout << vowelCount << endl;

    return 0;
}