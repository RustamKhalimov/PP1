#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int counter = 0;
    for(int i = 0 ; i < s.size() ; i++){
        if(char(s[i]) > char(s[i+1])){
            counter++;
        }
    }
    if(counter > 0){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}