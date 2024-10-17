#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n , m , k;
    cin >> n;
    cin >> m;
    cin >> k;
    if(k <= n * m and k > 1){
        cout << "YES";
    }
    else{
        cout<< "NO";
    }
}
