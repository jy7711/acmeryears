#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int , int> p1 = {1, 2};
    pair<int , int> p2 = make_pair(1,2);//老式
    //cout << p.first << " " << p.second;
    if (p1 == p2) {//判同
        cout << "yes" << endl;
    }
    //pair<pair<char, int> , char> p3;
}