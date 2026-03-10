#include <bits/stdc++.h>
using namespace std;
#define int long long 
void ac() {
    string s; cin >> s;
    map<char,int> mp;
    for (int i = 0; i < s.size(); i++) mp[s[i]]++;
    for (auto &x : mp) {
        for (int i = 0; i < x.second; i++) cout << x.first;  
    }
    cout << '\n';
    return;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) ac();
    return 0;
}