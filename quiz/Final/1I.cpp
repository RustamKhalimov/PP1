#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a , b , c ,sum = 0;
    a= n / 100;
    b = (n / 10) % 10;
    c= n % 10;
    sum = a + b + c;
    cout << sum; 
}