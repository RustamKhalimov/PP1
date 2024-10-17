#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int n ;

    cin >> n;

    int arr[n];

    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int k;

    cin >> k;

    sort(arr , arr + n );

    int sum = 0 ;

    for (int j = n - k ; j < n ; j++ ){
        sum = sum + arr[j];
    }
    cout << sum;
}