#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int sum = 0; 
    sort(arr , arr + n);
    for( int i = 0 ; i < n ; i++){
        sum = sum + arr[i];
    }
    cout << sum << " " << arr[n-1];
}