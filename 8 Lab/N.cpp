#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int n;

    cin >> n;

    vector<int> arr(n);

    for ( int i = 0; i < n ; i++){
        cin >> arr[i];
    }

    set<int> sets(arr.begin() , arr.end());

    for(auto &item : sets ){
       if( item % 2 != 0){
           cout << item << " ";
       }
    }
}    