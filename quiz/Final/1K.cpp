#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long h , m;
    h = n / 60;
    m = n % 60;
    long long s = h / 24;
    if (h >= 24){
        h = h - 24*s;
    }
    cout << h << " " << m; 
}