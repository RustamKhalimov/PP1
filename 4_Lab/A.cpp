#include <iostream>

using namespace std;

int main() {

    int a;

    cin >> a;

    int arr[a][a];

    for (int i = 0; i < a ; i++ ){
        for (int j = 0 ; j < a ; j++){
            cin >> arr[i][j];
        }
    }

    int max = arr[0][0];
    for (int i = 0; i < a ; i++ ){
        for (int j = 0 ; j < a ; j++){
           if(max < arr[i][j]){
            max=arr[i][j];
           }
        }
    }
    cout << max << endl;
   

    return 0;
}
