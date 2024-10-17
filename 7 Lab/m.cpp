#include <iostream> 
using namespace std; 
 
void printNaturalNumbers(int n) { 
    if (n == 0) { 
        return; 
    } 
    printNaturalNumbers(n - 1); 
    cout << n << " "; 
} 
 
int main() { 
    int n; 
    cin >> n; 
 
    printNaturalNumbers(n); 
    cout << endl; 
 
    return 0; 
}