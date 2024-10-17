#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i  = 0 ; i < n ; i++ ){
        cin >> arr[i];
    }
    sort(arr.begin() , arr.end());
    vector<int> v;
    for(int i = 0 ; i < arr.size() ; i++){
        if(count(arr.begin() , arr.end() , arr[i]) == 1){
            v.push_back(arr[i]);
        }
    }
    int sum = 0;
    for(int i = 0 ; i < v.size() ; i++){
        sum += v[i];
    }
    cout << sum;
}