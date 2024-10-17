#include <iostream>
#include <string>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    string ticketNumber = to_string(n); // Convert the number to a string

    int sum = 0;
    int lastDigit = ticketNumber.back() - '0'; // Get the last digit as an integer

    // Calculate the sum of all digits except the last one
    for (int i = 0; i < ticketNumber.length() - 1; i++) {
        sum += ticketNumber[i] - '0';
    }

    // Check if the ticket is lucky
    if (sum % lastDigit == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

