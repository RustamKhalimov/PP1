#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
string dectohex(int n){
    vector<char>v;
    int a = 1;
    while(n>0){
       if(n%16<10){
        v.push_back(char(48+n%16));
       }
       else{
        v.push_back(char(87+n%16));
       }
       n = n/16;
    }
    for(int i = v.size()-1;i>=0;i++){
        cout<<v[i];
    }
    return "utf";
}
int main(){
    int n;
    cin>>n;
    dectohex(n);

}