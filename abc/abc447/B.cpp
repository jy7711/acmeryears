#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    map<char, int> mp;
    string s; cin >> s;
    int mx = -1;
    for (int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
        mx = max(mx, mp[s[i]]);
    }
    for (int i = 0; i < s.size(); i++) {
        if (mp[s[i]] == mx) continue;
        cout << s[i];
    }
    return 0;
}