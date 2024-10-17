#include <iostream> 
#include <bitset> 
using namespace std; 
 
int main() { 
    int n; 
    cin >> n; 
     
    string binary = bitset<sizeof(n) * 8>(n).to_string(); 
    size_t pos = binary.find('1'); 
    if (pos != string::npos) { 
        binary = binary.substr(pos); 
    } else { 
        binary = "0"; 
    } 
 
    cout << binary << endl; 
     
    return 0; 
}