#include <bits/stdc++.h>

using namespace std;

int main() {

    string name ("Nikita");

    int a[5]= {};

    a[0] = 65;
    a[4] = 44;

    cout << *a << endl;

    cout << *(a+4) << endl;
    // "+4" - 4 шага в право

     cout << *name.begin() << " " << *name.begin() << endl;
    
    cout << *name.begin() << " " << (--*name.begin()) << endl;
    // "--" - шаг в лево  

    for (string :: iterator i = name.begin(); i != name.end() ; i++) {
        cout << *i << " ";
    }
    
    for (string :: reverse_iterator i = name.rbegin(); i != name.rend() ; i++){
        cout << *i << " " ;
    }

    cout <<  *name.rbegin() << " " << *name.rend() << endl;

    string reversedName = string(name.rbegin(), name.rend());

    cout << reversedName.front() << " " << reversedName.back() << endl;
    



    return 0;
}    