#include <iostream>

#include <algorithm>

using namespace std;

int main(){

    

    int n;

    cin >> n;

    int arr[n];

    for (int i = 0 ; i < n; i++){
        cin >> arr[i];
    }
    int maxi = arr[0] , mini = arr[0];

    for (int i = 0 ; i < n; i++){
        maxi = max(arr[i] , maxi);
        mini = min(arr[i] , mini);
    }
    

    cout << maxi - mini;
    return 0 ;

}