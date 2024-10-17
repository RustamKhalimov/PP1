#include <bits/stdc++.h> 
using namespace std; 
int main() { 
    int n; 
    cin>>n; 
    int sum = 0; 
    map<string,double>mp; 
    for(int i=0; i<n; i++){ 
        int m; 
        cin>>m; 
        for(int j=0; j<m; j++){ 
            string s; 
            double x; 
            cin>>s>>x; 
            mp[s]+=x; 
            sum+=x; 
        } 
    } 
    map<string,double>::iterator it; 
    for(auto it:mp){ 
        cout<<it.first<<' '<<((it.second)/sum)*100<<endl; 
    } 
}