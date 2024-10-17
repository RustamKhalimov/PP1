#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a , b , c , d;
    cin >> a ;
    cin >> b ;
    cin >> c ;
    cin >> d ;
    if(abs(a-c) == 2 and abs(b-d) == 1 or abs(a-c) == 1 and abs(b-d) == 2){
        cout <<"YES";
    }
    else{
        cout << "NO";
    }
}