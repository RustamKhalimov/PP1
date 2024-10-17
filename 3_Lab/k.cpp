#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> uniqueArr;
    uniqueArr.push_back(arr[0]);

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            uniqueArr.push_back(arr[i]);
        }
    }

    for (int i = 0; i < uniqueArr.size(); i++) {
        cout << uniqueArr[i] << " ";
    }

    cout << endl;

    return 0;
}