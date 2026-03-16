#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9+7;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    ll n, w; cin >> n >> w;
    vector<ll> a(n+1, 0), dp(1e4+7, 0);
    for (int i = 1; i <= n; i++) cin >> a[i];
    dp[0] = 1;
    for (int i = 1; i <= w; i++) {
        for (int j = 1; j <= n; j++) {
            if (i >= a[j]) (dp[i] += dp[i-a[j]]) %= mod;
        }
    }
    cout << dp[w] << '\n';
    return 0;
}