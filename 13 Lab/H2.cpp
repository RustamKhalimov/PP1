#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int k ;
    cin >> k;
    sort(arr , arr + n);
    for(int i = 0 ; i < k ; i++){
        cout << arr[i] << " ";
    }
}