#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9+7;
void ac()
{
    ll l, r; cin >> l >> r;
    if (r-l > 9) {
        cout << "0\n";
        return;
    }
    ll ans = 1;
    for (int i = l; i <= r; i++) {
        string s = to_string(i);
        for (int j = 0; j < s.size(); j++) ans = ans*(s[j]-'0')%mod;
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