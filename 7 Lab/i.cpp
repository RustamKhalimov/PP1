#include <iostream> 
using namespace std; 
 
int main() { 
    int num; 
    int sum = 0; 
 
    while (true) { 
        cin >> num; 
        if (num == 0) { 
            break; 
        } 
        sum += num; 
    } 
 
    cout << sum << endl; 
 
    return 0; 
}