#include <iostream>
#include <iomanip>
using namespace std;

double percentage(double total,double num){
    double perc = (num/total)*100;
    
    return perc;
}

int main(){
    double n,m;
    cin >> n >> m;

    cout << setprecision(6) << percentage(n,m);

    return 0;
}