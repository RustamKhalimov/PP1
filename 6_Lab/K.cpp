#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    int digitSum = 0;

    while (n > 0) {
        // Extract the last digit of the number
        int digit = n % 10;
        digitSum += digit;

        // Remove the last digit from the number
        n /= 10;
    }

    return digitSum;
}

int main() {
    int n;
    cin >> n;

    int result = sumOfDigits(n);
    cout << result << endl;

    return 0;
}
