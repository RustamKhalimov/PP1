 #include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int element;

    while (cin >> element) {
        sum += element;
    }

    cout << sum << endl;

    return 0;
}