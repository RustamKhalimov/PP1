#include <iostream> 
#include <string> 
using namespace std; 
 
char findMaxDigit(string num) { 
    char maxDigit = '0'; 
    for (char digit : num) { 
        if (digit > maxDigit) { 
            maxDigit = digit; 
        } 
    } 
    return maxDigit; 
} 
 
int main() { 
    string num; 
    cin >> num; 
 
    char maxDigit = findMaxDigit(num); 
    cout << maxDigit << endl; 
 
    return 0; 
}