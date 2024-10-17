#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    int n;

    cin >> n;

    pair<string , int> p[n];

    for(int i  = 0 ; i < n ; i++){
        cin >>p[i].first >> p[i].second ;       
    }
    for(int i  = 0 ; i < n ; i++){
        sort(p[i].first.begin() , p[i].first.end());
           
    }
  
    for(int i  = 0 ; i < n ; i++){
        cout << p[i].first << " " << p[i].second << " " << endl; 
    }
}
