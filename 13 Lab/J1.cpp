#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , m ;
    cin >> n >> m;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    reverse(arr , arr + m);
    reverse(arr + m , arr + n);
    for(int i = 0 ; i < n ; i++){
        cout << arr[i]<< " ";
    }
}