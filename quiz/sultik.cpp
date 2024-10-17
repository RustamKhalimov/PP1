#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;cin>>n;
    pair<int,vector<string> >p[10];
    for(int i = 0;i<10;i++){
        p[i].first = i;
    }
    p[0].second[0] = "* * * *";
    p[0].second[1] = "*     *";
    p[0].second[2] = "*     *";
    p[0].second[3] = "*     *";
    p[0].second[4] = "* * * *";
    p[1].second[0] = "     * ";
    p[1].second[1] = "   * * ";
    p[1].second[2] = " *   * ";
    p[1].second[3] = "     * ";
    p[1].second[4] = " * * * ";
    p[2].second[0] = "  * *  ";
    p[2].second[1] = "*     *";
    p[2].second[2] = "     * ";
    p[2].second[3] = "   *   ";
    p[2].second[4] = "* * * *";
    p[3].second[0] = "  * *  ";
    p[3].second[1] = "*     *";
    p[3].second[2] = "   * * ";
    p[3].second[3] = "*     *";
    p[3].second[4] = "  * *  ";
    p[4].second[0] = "*     *";
    p[4].second[1] = "*     *";
    p[4].second[2] = "* * * *";
    p[4].second[3] = "      *";
    p[4].second[4] = "      *";
    p[5].second[0] = "* * * *";
    p[5].second[1] = "*      ";
    p[5].second[2] = "* * * *";
    p[5].second[3] = "      *";
    p[5].second[4] = "* * * *";
    p[6].second[0] = "* * * *";
    p[6].second[1] = "*      ";
    p[6].second[2] = "* * * *";
    p[6].second[3] = "*     *";
    p[6].second[4] = "* * * *";
    p[7].second[0] = "* * * *";
    p[7].second[1] = "      *";
    p[7].second[2] = "    *  ";
    p[7].second[3] = "  *    ";
    p[7].second[4] = "*      ";
    p[8].second[0] = "  * * ";
    p[8].second[1] = "*     *";
    p[8].second[2] = "  * * ";
    p[8].second[3] = "*     *";
    p[8].second[4] = "  * *  ";
    p[9].second[0] = "* * * *";
    p[9].second[1] = "*     *";
    p[9].second[2] = "* * * *";
    p[9].second[3] = "      *";
    p[9].second[4] = "* * * *";
    vector<int>number;
    while(n>0){
       number.push_back(n%10);
       n = n/10;
    }
    for(int i = 0;i<5;i++){
        cout<<p[number[2]].second[i]<<" "<<p[number[1]].second[i]<<" "<<p[number[0]].second[i]<<endl;
    }

}
