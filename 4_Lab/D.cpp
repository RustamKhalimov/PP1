#include <iostream>

using namespace std;

int main(){
    int n ;
    cin >> n;

    int tab[100][100] = {0};

    for (int i = 0; i<n; i++){
        for ( int j = 0; j < n ; j++){
            tab[i][j] = i*j;
        }
    }
    
    for (int i = 0; i<n; i++){
        for ( int j = 0; j < n ; j++){
            if(i==0 and j>=0 or j==0 and i>=0){
                cout << i+j << " ";
            }
            else if (i>0 and j>0){
                cout << tab[i][j] << " ";
            }
        }
    }
    cout << endl; 

    return 0;
}