#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int up = 0 , sm = 0;
    for( char &c : s){
        if(isupper(c)){
            up++;
        }
        else{
            sm++;
        }
    }
    cout << sm << " " << up;
}