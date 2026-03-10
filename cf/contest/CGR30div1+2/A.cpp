#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll t; cin >> t;
    while (t--) {
        ll n, x, xx, nn, mx = -1e9-7, mn = 1e9+7;
        cin >> n; 
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        cin >> x;
        if (n == 1) {
            if (a[0] == x) cout << "YES\n";
            else cout << "NO\n";
            continue;
        }
        for (int i = 0; i < n; i++) {
            mx = max(a[i], mx);
            mn = min(a[i], mn);
        }
        if (mx >= x && mn <= x) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
