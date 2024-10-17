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
    int a , b;

    cin >> a >> b;
    int c = b - a + 1;
    s.erase(s.begin() + a,s.begin() + b + 1);

    for (int i = 0; i < n - c ; i++){
        
        cout << s[i] << " ";
    }
    return 0;
}