#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    ll x, ans = 0; cin >> x;
    for (int i = x; i <= x + 100; i++) {
        int cnt = 0;    
        string s = to_string(i);
        for (int j = 0; j < s.size(); j++) cnt += s[j]-'0';
        if (i - cnt == x) ans++;
    }
    cout << ans << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t = 1; cin >> t;
    while (t--) ac();
    return 0;
}