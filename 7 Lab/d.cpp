#include <iostream> 
#include <string> 
using namespace std; 
 
int main() { 
    string num; 
    cin >> num; 
 
    int sum = 0; 
    for (char digit : num) { 
        sum += digit - '0'; 
    } 
 
    cout << sum << endl; 
 
    return 0; 
}