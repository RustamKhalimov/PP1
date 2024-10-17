#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int  n;

    cin >> n;

    vector<int>s(n);

    for (int i = 0; i < n ; i++){
        cin >> s[i];
    }
    int k;

    cin >> k;

    s.erase(s.begin()+k);

    for (int i = 0; i < n -1 ; i++){
        
        cout << s[i] << " ";
    }
    return 0;
}