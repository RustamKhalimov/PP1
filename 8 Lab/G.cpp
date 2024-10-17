#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    vector<int> arr(n);

    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    int k;

    cin >> k;
     int count = 0;
    for (int num : arr) {
        if (num > k) {
            bool isPrime = true;
            for (int i = 2; i * i <= num; ++i) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                ++count;
            }
        }
    }

    cout << count << endl;

    return 0;

}