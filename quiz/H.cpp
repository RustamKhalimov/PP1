#include <iostream>
#include <string>
#include <vector>
using namespace std;
int foo(double n)
{
  vector<string> s(n);
  vector<double>p(n);
  vector<double>q(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i] >> p[i] >> q[i];
  }
  double ratio = q[0] / p[0];
  for (int i = 0; i < n; i++) {
    if (q[i] / p[i] > ratio) {
      ratio = q[i] / p[i];
    }
  }
  for (int i = 0; i < n; i++) {
    if (q[i] / p[i] == ratio) {
      cout << s[i];
      break;
    }
  }
  return ratio;
  

  
}
int main(){
    double n;
    cin>>n;
    foo(n);
}