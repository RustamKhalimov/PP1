#include <bits/stdc++.h>
using namespace std;
int main(){
    int subject;
    cin >> subject;
    int OddBreak = 5 , EvenBreak = 15 , SubjectTime = 45 , SubjectsEnd = 0;
    if (subject % 2 == 0){
        SubjectsEnd = (SubjectTime * subject) + (OddBreak * (subject / 2)) + (EvenBreak * (subject / 2)) - EvenBreak;
    }
    else{
        SubjectsEnd = (SubjectTime * subject) + (OddBreak * (subject / 2)) + (EvenBreak * (subject / 2)) ;
    }
    int Hour , Minute;
    Hour = SubjectsEnd / 60;
    Minute = SubjectsEnd % 60;
    cout << Hour + 9 << " " << Minute;
}