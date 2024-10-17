#include <iostream> 
using namespace std; 
 
int fibonacci(int n) { 
    if (n <= 0) { 
        return 0; 
    } 
    if (n == 1) { 
        return 0; 
    } 
    if (n == 2) { 
        return 1; 
    } 
 
    int prev = 0, current = 1; 
    for (int i = 3; i <= n; i++) { 
        int next = prev + current; 
        prev = current; 
        current = next; 
    } 
 
    return current; 
} 
 
int main() { 
    int n; 
    cin >> n; 
 
    int result = fibonacci(n); 
    cout << result << endl; 
 
    return 0; 
}