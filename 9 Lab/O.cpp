#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<string, string> ma;
    for(int i=0;i<n;i++){
        string s, l;
        cin>>s>>l;
        ma.insert(make_pair(s,l));
    }
    int m;
    cin>>m;
    pair<string, string> pa[m];
    for(int i=0;i<m;i++){
        string s, l;
        cin>>s>>l;
        pa[i]=make_pair(s, l);
    }
    for(int i=0;i<m;i++){
        if(ma.find(pa[i].first)==ma.end())cout<<"login error"<< endl;
        else if(pa[i].second==ma[pa[i].first])cout<<"correct password"<<endl;
        else cout<<"password error"<<endl;
    }


    return 0;
}