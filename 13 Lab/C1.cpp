#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 9;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }   
    int k = 0;
    for(int i = 0 ; i < n%2 ; i++){
        if(arr[i] == arr[n - 1 - i]){
            k++;
        }
    } 
    if(k == 8){
        cout <<"YES";
    }
    else{
        cout << "NO";
    }
}
