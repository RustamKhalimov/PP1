#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    int n ;

    cin >> n;

    pair<int , string > a[n];

    for ( int i = 0 ; i < n ; i++){
        int x ;
        string s;
        cin >> s >> x;

        a[i].first = x ;

        a[i].second = s;
    }
    sort(a,a+n);
     

    for(int i = 0 ; i < n ; i++){
        cout << a[i].second << " " <<  a[i].first<< endl;
    }
    return 0 ;
}