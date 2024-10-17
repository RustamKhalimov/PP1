#include <iostream>
#include <algorithm>

using namespace std;
 int main() {
    int n;
    cin >> n;
    string s[n];
    int arr[n];

    for(int i = 0 ;  i < n ; i++){
        cin >> s[i] >> arr[i];
    }
    sort(s , s + n);
    sort(arr , arr+ n);

    for (int i = 0 ; i < n ; i++){
        cout << s[i] << " " << arr[i] << endl;
    }


 }