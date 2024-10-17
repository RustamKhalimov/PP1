#include <iostream> 
using namespace std; 
 
bool isPowerOfTwo(long long n) { 
    return (n != 0) && ((n & (n - 1)) == 0); 
} 
 
int main() { 
    long long n; 
    cin >> n; 
 
    if (isPowerOfTwo(n)) { 
        cout << "Yes" << endl; 
    } else { 
        cout << "No" << endl; 
    } 
 
    return 0; 
}