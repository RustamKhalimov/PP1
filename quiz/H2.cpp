#include <iostream>

using namespace std;

int maxi(int n , int arr[] ){
    int sum = 0;
    int max = 0;
    for ( int i = 0 ; i < n ; i ++){
        sum +=arr[i];
        if( max < arr[i]){
            max = arr [i];
        }
    }
    cout << sum << " " << max ;
}
int main() {
    int n;

    int arr[n];

    cin >> n;

    for( int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    maxi(n , arr);
}
