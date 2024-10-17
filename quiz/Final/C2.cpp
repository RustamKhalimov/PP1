#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n ;
    vector<int>v(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    for(int i = 0 ; i < n ; i++){
        if(v[i] == v[i+1]){
            v.erase(v.begin());
        }
    }
    auto a = unique(v.begin(), v.end());
    v.erase(a, v.end()+1);
    int sum = 0;
    for(auto b : v){
        sum += b;
    }
    cout << sum;
}
