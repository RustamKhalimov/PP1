#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main(){
    int n ;

    cin >> n ;

    vector<int> v(n);

    for (int i = 0 ; i < n ; i++){
        cin >> v[i];
        
    }
    
   
    for(int i = 0; i < n ; i++){
        if ( v[i] != v[n - 1 - i] ){
            cout << "Instead of" << " " << v[i] << " " << " here was" << " " << v[n - 1 - i] << endl;
        }
        else{
           cout << "OK"  << endl;
        }
        
    }

   
    return 0;
}