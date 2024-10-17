#include <bits/stdc++.h>
using namespace std;
bool XoR(int x , int y){
    if(x != y){
        return true;
    }
    else {
        return false;
    }
}
int main(){
    int x , y;
    cin >> x >> y;
    cout << XoR(x ,y);
}