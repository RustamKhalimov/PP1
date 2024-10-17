#include <iostream>


using namespace std;

int f(){
    int n;

    cin >> n;

    int a[n];

    int x; 

    cin >> x;

    
    
    return 0;

}

int main(){

    int n;

    cin >> n;

    int a[n];

    
    for(int i = 0; i < n ; i++){
        cin >> a[i];
    }

    int x;

    cin >> x;

    

     for(int i = 0; i < n ; i++){
        if( x != a[i]){
            cout << "No" ;
            
        }
        
        else  {
            
            cout << "Yes" ;
           
        }
    }

    

    return 0 ;
}