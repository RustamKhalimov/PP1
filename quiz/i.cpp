#include<iostream>
#include<string>
using namespace std;
string replace(string s, string n,char r){
    for(int i = 0;i<s.length();i++){
        for (int j = 0;j<n.length();j++)
    {
        if(s[i]==n[j]){
            s[i]= r;
        }
    }
    cout<<s[i];
}
return 0 ;
}
int main(){
    string s;
    cin>>s;
    string n;
    cin>>n;
    char r;
    cin>>r;
    replace(s, n, r);
}