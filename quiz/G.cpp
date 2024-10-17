#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main() {
	string s;
	int n,sum = 0;
	getline(cin,s);
	cin >> n;
	vector<char>a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++) {
		cout << a[i] << " - ";
		for (int j = 0; j < s.size(); j++) {
			if (a[i] == s[j]) {
				sum++;
			}
		}
		cout << sum<<endl;
		sum = 0;
	}
	
}
