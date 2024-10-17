#include <bits/stdc++.h>

using namespace std;

int main(){
    int n  ;

    cin >> n ;

    pair<int , int>v[555];
    int x , y;
    for (int i  = 0 ; i < n ; i++){
        
        cin >> x >> y;
        v[i].first = x;
        v[i].second = y;
    }
    int c;
    for (int i  = 0 ; i < n ; i++){
        c = count(v , v + n , x % 10);
       
    }
    
    cout << c / 3;
    
    return 0;
    
}