#include <iostream>
#include <string>

using namespace std;
char findFurthestAlphabetChar(const std::string& str) {
    char furthestChar = 'a'; // Initialize with the first character in the alphabet

    for (char c : str) {
        if (c - 'a' > furthestChar - 'a') {
            furthestChar = c;
        }
    }

    return furthestChar;
}

int main() {
    string s;
    cin >> s;

    char furthestChar = findFurthestAlphabetChar(s);

    cout << furthestChar << endl;

    return 0;
}