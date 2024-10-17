#include <bits/stdc++.h>
#include <ctime>
using namespace std;

int main(){
    int n ;

    cin >> n;

    pair <int , int> p[n];

    for (int i = 0 ; i < n ; i++){
        cin >> p[i].first >> p[i].second;
    } 

    

    bool k  = 0;
    bool k1 = 0;

    for(int i = 0 ; i < n ; i++){
        int counter = 0;
        for(int j = i ; j >=0 ; j--){
            if (p[i].first = p[j].first && j != i){
                k == 1;
            }
            else{
                k == 0;
            }
            if(p[i].second = p[j].second && j != i){
                k1 == 1;
            }
            else{
                k1 == 0;
            }
             if (p[i].first = p[j].second && j != i){
                k == 1;
            }
            else{
                k == 0;
            }
            if(p[i].second = p[j].first && j != i){
                k1 == 1;
            }
            else{
                k1 == 0;
            }
            if(k = k1  ){
                counter++;
            }
        }
        cout << counter << endl;
        counter = 0;
        
    }

   
}