#include <iostream>
#include <cmath>

using namespace std;

int minus(int a[] , int b[] , int n) {

    for ( int i = 0 ; i < n ; i++ ){
        cin >> a[i];
        cin >> b[i];
    }
    
    int d[n] ;
    
    for ( int i = 0 ; i < n ; i++){
        d[i]= abs(a[n] - b[n]);
    }

    return d[n];
}

int main(){

    int n;

    cin >> n ;

    int a[n];

    int b[n];
    
    int d[n];

    for( int i = 0 ; i < n ; i++){
        cin >> a[i];
        cin >> b[i];
        cout << d[i] << " " ;
    }
    cout << endl;
    return 0;
}     