#include <iostream> 
#include <string> 
 
using namespace std; 
 
int main() { 
  string s; 
  int sum = 0, sum2 = 0; 
  cin >> s; 
  for (int i = 0; i < s.size(); i++) { 
    if (i % 2 == 0) { 
      sum += int(s[i]); 
    } else { 
      sum2 += int(s[i]); 
    } 
  } 
  if (sum == sum2) { 
    cout << "YES"; 
  } else { 
    cout << "NO";
  }
   return 0;
}   