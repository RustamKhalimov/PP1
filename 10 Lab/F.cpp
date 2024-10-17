#include <bits/stdc++.h>
using namespace std;
int main() {
    int a = 7;
    unordered_map<string, int> daysToIndex = {
        {"SUN", 7},
        {"MON", 1},
        {"TUE", 2},
        {"WED", 3},
        {"THU", 4},
        {"FRI", 5},
        {"SAT", 6}

    };
    string currentDay;
    cin >> currentDay;
    int currentDayIndex = daysToIndex[currentDay];
    int daysUntilSunday = (7 - currentDayIndex) % 7;
    if (daysUntilSunday == 0){
        cout<< a;
    }
    else{
    cout << daysUntilSunday << endl;
    }
    return 0;
}