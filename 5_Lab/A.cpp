#include <iostream>
#include <string>

using namespace std;
int main() {
    
    int a=0, b=0;
    
    string s;
    
    getline(cin,s);
    
    for (char c : s) {
        if (islower(c)) {
            a++;
        } else if (isupper(c)) {
            b++;
        }
    }
    cout << a << " " << b << endl;

    return 0;
}