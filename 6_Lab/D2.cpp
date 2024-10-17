#include <iostream>
#include <unordered_set>

using namespace std;

string hasBook(int n, int books[], int x) {
    
    unordered_set<int> libraryBooks(books, books + n);

    
    if (libraryBooks.find(x) != libraryBooks.end()) {
        return "Yes";
    } else {
        return "No";
    }
}

int main() {
    int n;
    cin >> n;

    int books[n];
    for (int i = 0; i < n; i++) {
        cin >> books[i];
    }

    int x;
    cin >> x;

    string result = hasBook(n, books, x);
    cout << result << endl;

    return 0;
}