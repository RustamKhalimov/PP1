#include <bits/stdc++.h>
using namespace std;
int main(){
    long long v , t;
    cin >> v;
    cin >> t;
    int s = 109;
    long long result;
    long long krug ;
    if(abs(v*t) > s){
        krug = abs(v*t)/s;
    }
    else{
        krug = 1;
    }
    result = abs(s*krug - abs(v*t));
    cout << result;
}