#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a , b , c , d;
    cin >> a ;
    cin >> b ;
    cin >> c ;
    cin >> d ;
    if(abs(a-c)==abs(b-d)){
        cout <<"YES";
    }
    else{
        cout << "NO";
    }
}