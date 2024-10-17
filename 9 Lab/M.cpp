#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    long long n ;

    cin >> n;

    queue<string>q;

    while (n--)
    {
        int k ;
        cin >> k;
        if(k == 1){
            string f;
            cin >> f;
            q.push(f);
        }
        else q.pop();
        if(q.empty())cout<<"queue is empty" << endl;
        
        else cout<<q.front() << endl; 

    }
    
    return 0 ;
}