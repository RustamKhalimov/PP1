#include <bits/stdc++.h>
#include <set>
using namespace std;

int main(){

    string s;

    cin >> s;

    int sum = 0;

    sort(s.begin() , s.end());

    for ( size_t i = 0 ; i < s.length() ; i++){
        if( s[i] == toupper(s[i])){
            s[i] = tolower(s[i]);
        }
    }

    sort (s.begin() , s.end());

    set<int> sets (s.begin() , s.end());

    for(auto &item : sets ){
        for ( int i = 0 ; i < s.length() ; i++){
        if(s[i] != s[i+1]){
            sum++;
        }
        }
    }
    cout << sum;
    cout << endl;

    for(auto &item : sets ){
        for ( int i = 0 ; i < s.length() ; i++){
        if(s[i] != s[i+1]){
            cout << item << " ";
        }
        }
    }
  
    return 0;
}