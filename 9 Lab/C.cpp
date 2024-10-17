#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<int, int> KezdesuMumkindigi;
    vector<int> v;

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        v.push_back(num);
        KezdesuMumkindigi[num]++;
    }

    int count = 0;

    for (const auto& it : KezdesuMumkindigi) {
        if (it.second >= 2) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
