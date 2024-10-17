#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n;
int a[100100];
int L[100100];
int R[100100];
vector<int> v;
int main(){
        cin >> n;
        for(int i = 0; i < n; i++)
                cin >> a[i];
        for(int i = 0; i < n; i++){
                while(v.size() > 0 && a[v.back()] >= a[i])
                        v.pop_back();
                if(v.size() > 0)
                        L[i] = v.back()+1;
                else L[i] = 0;
                        v.push_back(i);
        }
        v.clear();
        for(int i = n-1; i >= 0; i--){
                while(v.size() > 0 && a[v.back()] >= a[i])
                        v.pop_back();
                if(v.size() > 0) R[i] = v.back()-1;
                else R[i] = n-1;
                v.push_back(i);                
        }
        ll ans = 0;
        for(int i = 0; i < n; i++)
                ans = max(ans,a[i] * 1ll * (R[i] - L[i] + 1));
        cout << ans << endl;
        v.clear();
        return 0;
}