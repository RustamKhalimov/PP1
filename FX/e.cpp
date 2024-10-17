#include <bits/stdc++.h>
using namespace std;
bool IsDigit(unsigned char c){
    if(isdigit(c) == 1){
        return true;
    }
    else {
        return false;
    }
}
int main(){
    unsigned char c;
    cin >> c;
    if( IsDigit(c) == 1){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }
}