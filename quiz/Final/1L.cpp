#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    long long h , m;
    int c;
    h = n / 3600;
    m = (n - h * 3600) / 60;
    c = (n - h * 3600) % 60;
    long long s = h / 24;
    if (h >= 24){
        h = h - 24*s;
    }
    if(m < 10 and c < 10){
        cout << h <<  ":"<< "0" << m << ":" << "0" << c; 
    }   
    else if(c < 10){
        cout << h <<  ":" << m << ":" << "0" << c; 
    }
    else if(m < 10 ){
        cout << h <<  ":" <<"0" << m << ":" << c; 
    }
    else{
        cout << h <<  ":" << m << ":" << c;
    } 
}