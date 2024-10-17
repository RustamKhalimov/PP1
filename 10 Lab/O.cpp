#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>

// Function to convert a number to its binary representation and print it
void printBinary(int num) {
    std::bitset<sizeof(int) * 8> binary(num);
    std::cout << binary.to_string().substr(binary.to_string().find('1')) << std::endl;
}

int main() {
    int N;
    std::cin >> N;

    std::vector<int> elements(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> elements[i];
    }

    // Apply the printBinary function to each element of the vector using std::for_each
    std::for_each(elements.begin(), elements.end(), printBinary);

    return 0;
}