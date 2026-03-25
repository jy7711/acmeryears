#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int n; cin >> n;
    vector<ll> a(n+7, 0), dp(n+7, -1e9);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        dp[i] = max(a[i], dp[i-1]+a[i]);
    }
    ll ans = -1e9;
    for (int i = 1; i <= n; i++) ans = max(ans, dp[i]);
    cout << ans << '\n';
    return 0;
}