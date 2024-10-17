#include <iostream>
#include <string>
#include <unordered_map>

bool canFormPalindrome(const std::string& s) {
    std::unordered_map<char, int> charFrequency;

    // Count the frequency of each character in the string
    for (char ch : s) {
        charFrequency[ch]++;
    }

    int oddCount = 0;

    // Count the number of characters with odd frequency
    for (const auto& pair : charFrequency) {
        if (pair.second % 2 != 0) {
            oddCount++;
        }
    }

    // For a palindrome permutation, at most one character can have an odd frequency
    return oddCount <= 1;
}

int main() {
    std::string s;
    std::cin >> s;

    if (canFormPalindrome(s)) {
        std::cout << "ZA WARUDO TOKI WO TOMARE\n";
    } else {
        std::cout << "JOJO\n";
    }

    return 0;
}