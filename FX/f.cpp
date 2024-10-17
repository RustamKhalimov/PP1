#include <bits/stdc++.h>
#include <cctype>
using namespace std;
int main(){
    string s;
    cin >> s;
    for( char &c : s){
        if(islower(c)){
            c = toupper(c);
        }
        else{
            c= tolower(c);
        }
    }
    cout << s;
}