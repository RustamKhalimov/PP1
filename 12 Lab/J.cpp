#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr1(n);
    for (int i = 0; i < n ; i++) {
        cin >> arr1[i];
    }
    
    int m; 
    cin >> m;
    vector<int> arr2(m);
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    sort(arr1.begin(), arr1.end());

    for (int i = 0; i < m; i++) {
        int left = 0;
        int right = n - 1;
        int amount = 0;

        while (left < right) {
            int sum = arr1[left] + arr1[right];

            if (sum == arr2[i]) {
                amount++;
                break;  
            } else if (sum > arr2[i]) {
                right--;
            } else {
                left++;
            }
        }

        if (amount > 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
} 