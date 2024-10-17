#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s, t, l; cin >> s >> t;
    int n = t.size();
    for(int i = 0; i < s.size(); i++) {
        l = "";
        for(int j = 0; j < n; j++) {
            l += s[i + j];
        }
        if(t == l) cout<<i<<" ";
    }
   
}