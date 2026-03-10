#include <bits/stdc++.h>
using namespace std;
int cc(string s) 
{
    if (s == "Ocelot") return 1;
    else if (s == "Serval") return 2;
    else return 3;
}
int main()
{
    string s1, s2; 
    cin >> s1 >> s2;
    int a = cc(s1);
    int b = cc(s2);
    cout << (a >= b ? "Yes" : "No");
    return 0;
}