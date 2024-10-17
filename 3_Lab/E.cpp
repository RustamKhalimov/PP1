#include <iostream>
using namespace std;

int main() {
    int n ;
    long long sum=0;
    int highNum = -99999999;
    long long b;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> b;
        sum += b;       
        }
    
    
    cout << sum << endl;
    
    return 0;
}