#include <bits/stdc++.h>

using namespace std;

bool isBracketSequenceCorrect(const string& sequence) {
    stack<char> st;

    for (char bracket : sequence) {
        if (bracket == '(') {
            st.push(bracket);
        } else if (!st.empty() && st.top() == '(') {
            st.pop();
        } else {
            return false; // There is a closing bracket without a corresponding opening bracket
        }
    }

    return st.empty(); // If the stack is empty, all opening brackets had corresponding closing brackets
}

int main() {
    string bracketSequence;
    cin >> bracketSequence;

    if (isBracketSequenceCorrect(bracketSequence)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
