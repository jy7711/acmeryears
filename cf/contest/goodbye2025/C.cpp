#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n; cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    if (n == 2) {cout << max(a[0],-a[1]) << '\n'; return;}
    ll sum = 0;
    for (int i = 1; i < n-1; i++) sum += a[i];
    ll ans = a[0] - sum;
    ll x = max(a[0],-a[n-1])-a[0], y = 0;
    for (int i = 1; i < n-1; i++) {
        ll z = 2*y + a[i] + max(a[i],-a[n-1]);
        if (z > x) x = z;
        y = max(y,y+a[i]);
    }
    cout << ans + x << '\n';
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        ac();
    }
    return 0;
}