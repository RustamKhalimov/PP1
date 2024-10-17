#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m;
    cin >> n;
    cin >> m;
    vector<int>v1(n);
    vector<int>v2(m);
    for(int i = 0 ; i < n ; i++){
        cin >> v1[i];
    }
    for(int j = 0 ; j < m ; j++){
        cin >> v2[j];
    }
    int c = n + m;
    vector<int>v3;
     for(int i = 0 ; i < c-1 ; i++){
        if(i<n){
            v3.push_back(v1[i]);
        }
        if(i<m){
            v3.push_back(v2[i]);
        }
    }
    for(int i = 0;i<c;i++){
        cout<<v3[i]<<" ";
    }
    
}