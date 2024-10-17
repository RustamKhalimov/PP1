#include <bits/stdc++.h>

using namespace std;
bool isEven (int a , int b){
    return a > b; 
}
int main(){
    int n ;

    cin >> n;

    vector<int> v(n);

    for(int i = 0 ; i < v.size() ; i++){
        cin >> v[i];
    }
    
    sort(v.begin() , v.end());
    
    auto isEven = [](int x) { return x % 2 == 0; };
    
    stable_partition(v.begin(), v.end(), isEven);
    
    int even = 0;
    
    for(int i = 0 ; i < v.size() ; i++){
        if( v[i] % 2 == 0){
            even++;
        
        };
    }
    
    sort(v.begin() , v.begin() + even , isEven );
    
    for(int i = 0 ; i < v.size() ; i++){
        cout << v[i] << " ";
    }
}