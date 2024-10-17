#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
   int n;
   cin >> n;
   vector<int>v(n);
   vector<int>odd;
   vector<int>even;
   int x;
   for(int i = 0;i<n;i++){
    cin>>v[i];
    if(v[i]%2==0){
        even.push_back(v[i]);
    }
    else{
        odd.push_back(v[i]);
    }
   }
   sort(even.begin(),even.end());
   sort(odd.begin(),odd.end());
   if(n%2 == 0){
   for(int i= 0;i<even.size();i++){
    cout<<even[i]<<" ";
   }
   for(int i= odd.size()-1;i>=0;i--){
    if(i == 0){
        cout<<odd[i];
    }
    else cout<<odd[i]<<" ";
   }
   }
   else{
     for(int i= even.size()-1;i>=0;i--){
    cout<<even[i]<<" ";
   }
   for(int i= 0;i<odd.size();i++){
    if(i == 0){
        cout<<odd[i];
    }
    else cout<<odd[i]<<" ";
   }
   }

   }

