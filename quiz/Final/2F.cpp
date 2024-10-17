#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a , b , c;
    cin >> a ;
    cin >> b ;
    cin >> c ;
    if(a >= b and a >= c){
        cout << a;
    }
    else if(b >= a and b >= c){
        cout << b;
    }
    else if(c >= a and c >= b){
        cout << c;
    } 
 
}