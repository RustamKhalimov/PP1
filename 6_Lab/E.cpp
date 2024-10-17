#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int hypotenuse(int a , int b){
    float c = sqrt(a * a + b * b);
    return  c;

}
int main(){

    int a , b;

    cin >> a >> b;

    float c = sqrt(a * a + b * b);

    cout << setprecision(4) << c << endl;

    return 0;

}


