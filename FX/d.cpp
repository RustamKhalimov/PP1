#include <iostream>
using namespace std;
int main() {
    cout << "Thank you so much!!!!!!!!\n" << "happy New Year\n";
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5 - i - 1; ++j) {
            cout << " ";
        } for (int k = 0; k < 2 * i + 1; ++k) {
            cout << "*";
        } cout << '\n';
    }
    cout << "   ***    \n";
    cout << "   ***    \n";
}