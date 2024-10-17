#include <iostream>
#include <algorithm>

using namespace std;

int countEquals(int a[], int b[], int n) {
    int count = 0;

    sort(a, a + n);
    sort(b, b + n);

   

    int i = 0, j = 0;
    while(i < n && j < n) {
        if(a[i] == b[j]) {
            count++;
            i++;
            j++;
        }
        else if(a[i] > b[j]) j++;
        else i++;
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    int a[n];
    int b[n];

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    cout << countEquals(a, b, n) << endl;

    return 0;
}