#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll f[70], b[70];
void ac()
{
    ll n, m; cin >> n >> m;
    string ans;
    for (int i = 0; i < m; i++) {
        ll x, y, z; cin >> x >> y >> z;
        if (max({x,y,z}) < f[n]+f[n-1] || min({x,y,z}) < f[n]) {
            ans += '0';
        }
        else ans += '1';
    }
    cout << ans << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    f[1] = 1; f[2] = 2;
    for (int i = 3; i < 67; i++) {
        f[i] = f[i-1] + f[i-2];
    }

    int t; cin >> t;
    while (t--) ac();
    return 0;
}