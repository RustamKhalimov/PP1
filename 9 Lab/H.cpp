#include <iostream>
#include <map>
using namespace std;

int main(){
int n;
cin>>n;
int ind=1;
map<string, int> ma;
for(int i=0;i<n;i++){
string s;
cin>>s;
ma.insert(make_pair(s, ind));
++ind; 
}
map<string, int> ::iterator it;
for(it=ma.begin(); it!=ma.end();it++){
cout<<(*it).first<<" "<< (*it).second;
cout<<endl;
}

return 0;
}