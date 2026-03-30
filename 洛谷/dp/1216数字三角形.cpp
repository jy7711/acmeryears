#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll r, ans, dp[1007][1007], a[1007][1007];
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    cin >> r;
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= i; j++) cin >> a[i][j];
    }
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= i; j++) {
            dp[i][j] = max(dp[i-1][j], dp[i-1][j-1]) + a[i][j];
            ans = max(ans, dp[i][j]);
        }    
    }
    cout << ans << '\n';
    return 0;
}