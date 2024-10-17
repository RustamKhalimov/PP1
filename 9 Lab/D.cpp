#include <bits/stdc++.h>

using namespace std;

int main(){
    int n , k ;

    cin >> n >> k ;

    vector<int>v(n);

    for (int i  = 0 ; i < v.size() ; i++){
        cin >> v[i];
    }

    cout << count(v.begin() , v.end() , k) ;
    
}