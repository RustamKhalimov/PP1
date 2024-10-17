#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a , b , c , d;
    cin >> a ;
    cin >> b ;
    cin >> c ;
    cin >> d ;
    if(a == c or b == d or abs(a-c)==abs(b-d)){
        cout <<"YES";
    }
    else{
        cout << "NO";
    }
}