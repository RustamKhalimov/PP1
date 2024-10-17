#include <iostream>
#include <string>

using namespace std;

int main(){

    string s;
    cin >> s;
    for(int i=0;i<s.length(); i++){
    }    
    for( int i=0; i<s.length(); i++){
        if(s[s.length()-(i+1)]!=s[i]){
            cout << "NO";
            return 0;
        }
        
    }
    cout << "YES";
    return 0;
}