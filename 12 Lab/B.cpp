#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n , m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j < m; j++){
          cin >> arr[i][j]; 
        }
    }
    int l;
    cin >> l;
    bool penalty = false;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (arr[i][j] > l) {
                penalty = true;
                break;
            }
        }
        if (penalty) {
            break;
        }
    }
    if (penalty) {
        cout << "Penalty!" << endl;
    } else {
        cout << "No penalty for today." << endl;
    }
    return 0;
}