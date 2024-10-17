#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long

int main(){
   
    string s;
    cin>>s;
    stack<char>st; st.push(s[0]);
    for(int i=1; i<s.size(); i++){
        st.push(s[i]);
        if(st.size()>1){
            char scnd=st.top(); st.pop(); char frst=st.top();
            int tp = (int(frst)-48)*10+(int(scnd)-48);
            if(sqrt(tp)==floor(sqrt(tp))) st.pop();
            else st.push(scnd);
        }
    }
    if(st.empty())cout<<"Stack is empty";
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}
