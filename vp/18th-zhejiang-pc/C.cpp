#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    vector<int> x(8), y(8), z(8);
    map<ll,ll> mp;
    bool gg1 = 0, gg21 = 0, gg22 = 0;
    ll cnt = 0;
    for (int i = 0; i < 8; i++) cin >> x[i] >> y[i] >> z[i];
    for (int i = 0; i < 8; i++) {
        for (int j = i+1; j < 8; j++) {
            ll dx = abs(x[i]-x[j]);
            ll dy = abs(y[i]-y[j]);
            ll dz = abs(z[i]-z[j]);
            if (dx*dx + dy*dy + dz*dz) mp[dx*dx + dy*dy + dz*dz]++;
        }
    }
    ll aa = 1e18, bb = -1, cc = -1;
    for (auto[x, y] : mp) {
        if (y == 12) aa = min(aa, x), bb = max(bb, x);
        else if (y == 4) cc = x;  
    }
    
    if (bb == aa*2 && cc == aa*3) {
        cout << "YES\n";
    }
    else cout << "NO\n";
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t = 1; cin >> t;
    while (t--) ac();
    return 0;
}