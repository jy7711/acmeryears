#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (i != (s.size()-1)/2) cout << s[i];
    }
    return 0;
}