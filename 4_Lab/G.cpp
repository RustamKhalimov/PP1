#include <iostream>
using namespace std;

int main(){
    int n , i , j;
    int a = 1;
    cin >> n;
    int b = n;

    for (int i = 0; i < n ; i++){
        for (int j = 0 ; j < n; j++){
            if( j == b-1){
                cout << a;
            }
            else{
                cout << ".";
            }
        }
        cout << endl;
        a++;
        b--;

    }
    return 0;
}