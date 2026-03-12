#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t, m; cin >> t >> m;
    vector<int> dp(1007,0);
    for (int i = 0; i < m; i++) {
        int v, w; cin >> v >> w;
        for (int j = t; j >= v; j--) {
            dp[j] = max(dp[j], dp[j-v]+w);
        }
    }
    cout << dp[t] << '\n';
    return 0;
}