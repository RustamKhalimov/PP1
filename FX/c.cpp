#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    vector<string>s(n);
    for(int i = 0 ; i < n ; i++){
        cin >> s[i];
    }
    set<string> set;
    set.insert(s.begin() , s.end());
    cout << set.size();
}