#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

bool IsPrime(int num){
    if(-1 < num && num < 2){
        return false;
    }
    for (int i = 2; i  <= sqrt(abs(num)); ++i) {
        if (abs(num) % i == 0) {
            return false;
        }
         
    }
    
    return true;
}

int main() {
    int n;

    cin >> n;

    vector<int> arr(n);

    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    sort(arr.begin() , arr.end());
    unique(arr.begin() , arr.end());
    int CountPrime = count_if(arr.begin() , arr.end() , [] (int num) { return IsPrime(num); });
    cout << CountPrime ;
}
