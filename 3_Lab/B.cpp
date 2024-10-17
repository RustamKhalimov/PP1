#include <iostream>

using namespace std;

int main() {
    
    int a , num=0;
    
    cin >> a;
    
    int arr[a];
    
    for(int i=0; i < a; i++){
        cin >> arr[i];
    }
    
    for(int i=0; i < a; i++){
        if(arr[i] > 0){
            num++ ;
        }
    }
     cout << num ;
    return 0;
}