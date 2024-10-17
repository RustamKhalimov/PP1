#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;


int main() {
    int n;
    cin >> n;

    unordered_map<string, int> contactCount;

    // Input telephone numbers and update their counts
    for (int i = 0; i < n; ++i) {
        string phoneNumber;
        cin >> phoneNumber;
        contactCount[phoneNumber]++;
    }

    // Count how many telephone numbers occurred exactly three times
    int countOfThreeOccurrences = 0;
    for (unordered_map<string, int>::const_iterator it = contactCount.begin(); it != contactCount.end(); ++it) {
        if (it->second == 3) {
            countOfThreeOccurrences++;
        }
    }

    // Output the result
    cout << countOfThreeOccurrences << endl;

    return 0;
}
