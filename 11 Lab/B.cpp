#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int m;
    cin>>m;
    int max1,min = 100000;
    for(int i = 0;i<n;i++){
        if(v[i]-m<0){
            if((v[i]-m)*(-1)<min){
                min = (v[i]-m)*(-1);
                max1 = (v[i]);
            }
        }
        else{
            if(v[i]-m<min){
               min = v[i]-m;
               max1=v[i];
            }
        }
    }
    if(max1>0)cout<<max1-1;
    else{
        cout<<max1*(-1) -1;
    }
    
      
}