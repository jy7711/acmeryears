#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        ll n, k; cin >> n >> k;
        vector<ll> a(n), b(n), dp(n,0), l(n+1,0), r(n+1,0);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        ll ans = a[0];
        if (k & 1) {
            l[0] = a[0], r[n-1] = a[n-1];

            for (int i = 1; i < n; i++) l[i] = max(l[i-1]+a[i],a[i]);
            for (int i = n-2; i >= 0; i--) r[i] = max(r[i+1]+a[i],a[i]);
            for (int i = 0; i < n; i++) {
                ans = max(ans,l[i]+r[i]-a[i]+b[i]);
            }
        }
        else {
            dp[0] = a[0];
            for (int i = 1; i < n; i++) {
                dp[i] = max(dp[i-1]+a[i],a[i]);
                ans = max(ans,dp[i]);
            }
        }
        cout << ans << '\n';
        
    }
    return 0;
}