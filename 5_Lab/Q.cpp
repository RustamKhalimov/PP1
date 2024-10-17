#include <iostream>
#include <string>

using namespace std;
int main() {
    string s, t;
    cin >> s >> t;

    int slen = s.length();
    int tlen = t.length();

    if (tlen % slen == 0) {
        int repeats = tlen / slen;
        string concatenated = "";
        for (int i = 0; i < repeats; i++) {
            concatenated += s;
        }

        if (concatenated == t) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        cout << "NO" << endl;
    }

    return 0;
}