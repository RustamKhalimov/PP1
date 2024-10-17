#include <bits/stdc++.h>
using namespace std;
int main(){
    int n , a , b;
    cin >> n;
    vector <int> v(n);
    for(int i = 0 ; i < n; i++){
        cin >> v[i];
    }
    cin >> a;
    int D = abs(v[0] - a);
    int I = 0;

    for (int i = 1; i < n; ++i) {
    int c = abs(v[i] - a);
    if (c < D || (c == D && i < I)) {
            D = c;
            I = i;
        }
    }
    cout << I << endl;
    return 0;
}