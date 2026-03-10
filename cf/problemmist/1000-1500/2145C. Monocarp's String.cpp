#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n; cin >> n;
    string s; cin >> s;
    int cnt = 0;
    for (int i = 0; i < n; i++) cnt += (s[i] == 'a' ? 1 : -1);
    map<int,int> mp;
    int cc = 0, ans = 1e9+7;
    mp[0] = -1;
    for (int i = 0; i < n; i++) {
        cc += (s[i] == 'a' ? 1 : -1);
        mp[cc] = i;
        if (mp.count(cc-cnt)) ans = min(ans,i-mp[cc-cnt]);
    }
    cout << (ans == n ? -1 : ans) << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t; cin >> t;
    while (t--) ac();
    return 0;
}