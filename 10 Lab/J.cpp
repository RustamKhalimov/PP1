#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main(){
    int n , r;

    cin >> n >> r;

    vector<int>v(n);

    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }

    sort(v.begin() , v.end());
    
    rotate(v.begin() , v.begin()+r , v.end());

   

    for (int i = 0 ; i < n ; i++){
        cout << v[i] << " ";
    }
    return 0;
}