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
    int max = arr[0];
    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
        if(arr[i] > max){
            max = arr[i];
        } 
    }
    cout << sum << " " << max;
}