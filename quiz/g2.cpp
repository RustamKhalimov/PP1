#include <iostream>
#include<cctype>
#include <algorithm>

using namespace std;

int sergek(int n , int m  , int t){
    int arr[n][m];
    
    for( int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            sort(arr[0][0],arr[i+n][i+m]);
            if (arr[i][j] > t){
            cout << "penalty ";
           }
         
           
        }

    }
    cout<<" No penalty for today";

    return 0;
}
int main(){
    int n , m;
    cin >> n >> m;
    int arr[n][m];
    for( int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> arr[i][j];
        }
    }
    int t;

    cin >> t;

    sergek(n , m  , t);
}
