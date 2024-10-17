#include <iostream>
#include <string>

char shiftCharacter(char ch, int shift) {
    return 'A' + (ch - 'A' + shift) % 26;
}

std::string shiftString(const std::string& str, int shift) {
    std::string result = "";

    for (char ch : str) {
        if (std::isalpha(ch) && std::isupper(ch)) {
            char shifted = shiftCharacter(ch, shift);
            result += shifted;
        } else {
            result += ch; // Keep non-alphabetic characters unchanged
        }
    }

    return result;
}

int main() {
    int N;
    std::string S;

    std::cin >> N >> S;

    std::string shiftedString = shiftString(S, N);
    std::cout << shiftedString << std::endl;

    return 0;
}