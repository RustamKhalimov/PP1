#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    pair<int , string>p[n];
    for (int i = 0 ; i < n ; i++) {
        int a;
        string s;
        cin >> s >> a;

        p[i].first = a;
        p[i].second = s;
    }
    sort(p , p+n);
    reverse(p , p+n);
    for(int i = 0 ; i < n ; i ++)
    {
        cout<<p[i].second << " "<< p[i].first << endl;
    }
    
}