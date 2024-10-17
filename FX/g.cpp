#include <bits/stdc++.h>
using namespace std;
int main(){
    string s , s2;
    cin >> s;
    cin >> s2;
    int counter = 0;
    for(int i = 0 ; i < s2.size() ; i++){
        if(s2[i + s.size()] = s[s.size()]){
            cout << "Yes";
        }
        else{
            cout << "No";
        }
    }
}