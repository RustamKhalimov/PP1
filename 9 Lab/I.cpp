#include <bits/stdc++.h> 
using namespace std;
 int main(){
 int n;
 cin >> n;
 unordered_set <string> names; 
for(int i = 0; i < n; ++i){
 string name;
 cin >> name;
 if(names.find(name) == names.end()){ 
names.insert(name);
 cout << "new user added\n"; 
}
 else{
 cout << "user already exists\n";
 }
 }
 return 0;
 }