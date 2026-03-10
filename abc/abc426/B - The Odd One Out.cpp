#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin >> s;
    map<char,int> mp;
    vector<char> a;
    for (int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
        if (mp[s[i]] == 1) a.push_back(s[i]);
    }
    if (mp[a[0]] > mp[a[1]]) cout << a[1];
    else cout << a[0];
    return 0;
}