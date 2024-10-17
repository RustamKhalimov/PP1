#include <iostream>

using namespace std;
// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    // Reading input
    int n;
    
    cin >> n;

    // Calculating and printing the factorial
    int result = factorial(n);
    cout << result << endl;

    return 0;
}