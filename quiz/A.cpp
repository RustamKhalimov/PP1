#include <iostream>
#include <string>
#include <cctype>

using namespace std;
int main() {
    string s;

    string a = " ";

    cin >> s;

    for (int i = 0; i < s.length(); i++){    
        if(isalpha(s[i])){
            continue;
            a += s[i];
        }
        cout << a << endl;
    }
  return 0;  
}