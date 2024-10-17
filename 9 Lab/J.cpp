#include <bits/stdc++.h>

using namespace std;
int main() {
    int n;
    cin >> n;

    map<std::string, int> doramas;

    for (int i = 0; i < n; ++i) {
        string s;
        int k;
        cin >> s >> k;

        doramas[s] += k;
    }

    vector<pair<string, int>> sorted_doramas(doramas.begin(), doramas.end());
    sort(sorted_doramas.begin(), sorted_doramas.end());

    for (const auto& entry : sorted_doramas) {
        cout << entry.first << " " << entry.second << "\n";
    }

    return 0;
}
