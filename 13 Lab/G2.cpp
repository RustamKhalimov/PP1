#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m = 1;
    for(int i  = n ; i > 0 ; i--){
        m *= i;
    }
    cout << m;
}