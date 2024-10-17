#include <iostream> 
#include <string> 
using namespace std; 
 
int countEvenDigits(string num) { 
    int count = 0; 
    for (char digit : num) { 
        int d = digit - '0'; 
        if (d % 2 == 0) { 
            count++; 
        } 
    } 
    return count; 
} 
 
int main() { 
    string num; 
    cin >> num; 
 
    int result = countEvenDigits(num); 
    cout << result << endl; 
 
    return 0; 
}
