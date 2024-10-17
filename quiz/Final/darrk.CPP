#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>v(n);
    vector<int>v1(n);
    for(int  i = 0 ; i < n ; i++){
        cin >> v[i];
        v1[i]==v[i];
    }
    sort(v.begin(), v.end());
    int sum = 0;
    for(int i  =0;i < v.size();i++){
        for(int j = 0;j<v.size();j++){
            if(v[i]==v[j] and i!=j){
                v.erase(v.begin()+j);
                i--;
                j--;
            }
        }
    }
    for(int i  =0;i < v.size();i++){
        for(int j = 0;j<v.size();j++){
            if(v[i]==v[j] and i!=j){
                v.erase(v.begin()+j);
                i--;
                j--;
            }
        }
    }
    for(int i = 0;i<v.size();i++){
        if(count(v1.begin(),v1.end(),v[i]) == 1){
            sum = sum + v[i];
        }
    }
    cout<<sum;

}