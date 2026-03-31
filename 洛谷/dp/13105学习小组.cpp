#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int n; cin >> n;
    vector<ll> a(n+1), dp(n+1, 0);
    for (int i = 1; i <= n; i++) cin >> a[i];

    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) dp[j] = max(dp[j-i]+a[i], dp[j]); 
    }
    
    cout << dp[n] << '\n';
    return 0;
}