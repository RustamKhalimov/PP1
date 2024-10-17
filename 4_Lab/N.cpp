#include <iostream>

using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n; // Input n

    // Output the prime numbers using a nested for loop
    for (int num = 2; num <= n; ++num) {
        if (isPrime(num)) {
            cout << num << " is prime" << endl;
        }
    }

    return 0;
}