#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
    int  n;
    cin >> n;
    vector<int>arr(n);
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int a , b;
    cin >> a >> b;
    arr.erase(arr.begin() + a , arr.begin() + b + 1);
    for(int i  = 0 ; i < arr.size() ; i++){
        cout << arr[i] << " ";
    }
}