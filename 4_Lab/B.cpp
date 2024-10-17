#include <iostream>

using namespace std;

int main() {

    int n, maxi, maxi_2;
    cin >> n;

    int a[n][n];

    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    maxi= a[0][0];
    maxi_2 = a[0][0];

    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            maxi = max(a[i][j], maxi);
            
        }
    }

    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (a[i][j] < maxi){
                maxi_2 = max(a[i][j], maxi_2);
            }
            
        }
    }
    if (maxi == maxi_2) cout << 0;
    else cout << maxi_2;

    return 0;
}