#include <iostream>
using namespace std;
int main(){
    int n, max=0, pos1 = 0, pos2 = 0; 
    cin >> n;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j] > max){
                max = a[i][j];
                pos1 = i + 1;
                pos2 = j + 1;
            }
        }
    }
    cout << pos1 << " " << pos2;
    return 0;
}