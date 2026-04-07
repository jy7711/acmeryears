#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 7;
int w[N], v[N], dp[N];
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    ll s, n, d, ans = 0; cin >> s >> n >> d;
    for (int i = 1; i <= d; i++) cin >> w[i] >> v[i];

    for (int i = 1; i <= n; i++) {
        memset(dp, 0, sizeof(dp));
        int m = s/1000;
        for (int j = 1; j <= d; j++) {
            for (int k = w[j]/1000; k <= m; k++) {
                dp[k] = max(dp[k-w[j]/1000] + v[j], dp[k]);
                //cout << dp[k] << ' ';
            }
            //cout << '\n';
        }
        s += dp[m];
    }

    cout << s << '\n';
    return 0; 
}