#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    set<int> s;
    for(int i=0;i<n;i++){
        cin>>v[i];
        s.insert(v[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(i!=j and s.find(v[i]^v[j])!=s.end()) count++;
        }
    }
    cout<<count;

}