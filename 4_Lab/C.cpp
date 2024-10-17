#include <iostream>

using namespace std;

int main() {

    int a , b ;
    int neg = 0;
    cin >> a >> b;

    int arr[a][b];

    for (int i = 0; i < a ; i++ ){
        for (int j = 0 ; j < b ; j++){
            cin >> arr[i][j];
        }
    }

   
    for (int i = 0; i < a ; i++ ){
        for (int j = 0 ; j < b ; j++){
           if(arr[i][j] < 0 ){
            neg++;
           }
           
        }
    }
    cout << neg << endl;
   

    return 0;
}