#include <iostream> 
 
using namespace std; 
 
int main() { 
  int n, k; 
  cin >> n >> k; 
 
  int times[n]; 
  for (int i = 0; i < n; i++) { 
    cin >> times[i]; 
  } 
 
  bool isCheater = false; 
  for (int i = 0; i < n - k + 1; i++) { 
    int count = 0; 
    for (int j = i; j < i + n; j++) { 
      if (times[j] <= times[i]) { 
        count++; 
      } 
    } 
 
    if (count >= 2) { 
      isCheater = true; 
      break; 
    } 
  } 
 
  if (isCheater) { 
    cout << "cheater" << endl; 
  } else { 
    cout << "no" << endl; 
  } 
 
  return 0; 
}
