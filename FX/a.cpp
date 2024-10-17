#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 9999;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
        if(arr[i] == 0){
            break;
        }
    }
    int sum = 0;
    int lenth = (arr.size()/2)+1;
    vector<int>arr2(n);
    for(int i = 0 ; i < lenth ; i++){
        arr2[i] = arr[i] + arr[n - 1 - i];
    }
    for(int i = 0 ; i < arr2.size() ; i++){
        cout << arr2[i] << endl;
    }
}