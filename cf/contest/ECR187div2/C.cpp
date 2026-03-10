#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll s, m; 
bool check(ll n) 
{
    ll c = 0;
    for (int i = 0; i < 60; i++) {
        if (m >> i & 1) c += n; 
        if (s >> i & 1) {
            if (!c) return 0;
            c--;
        }
        c >>= 1;
    }
    return 1;
}
void solve() 
{
    cin >> s >> m;
    if (s%(m & -m)) {
        cout << "-1\n";
        return;
    }
    ll l = 0, r = (1ll << 60), ans = 0;
    while (l <= r) {
        ll mid = l + (r-l)/2;
        if (check(mid)) ans = mid, r = mid-1;
        else l = mid+1;
    }
    cout << ans << '\n';
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}