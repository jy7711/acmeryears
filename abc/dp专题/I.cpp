#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int n; cin >> n;
    vector<vector<double>> dp(n+1, vector<double> (n+1));
    vector<double> a(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    //i是从头到尾遍历每一个事件， j是遍历有j个事件发生
    dp[0][0] = 1.0;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            dp[i][j] = dp[i-1][j]*(1-a[i]);
            if (j) dp[i][j] += dp[i-1][j-1]*a[i];
        }
    }

    double ans = 0.0;
    for (int i = n/2+1; i <= n; i++) ans += dp[n][i];
    
    cout << fixed << setprecision(15) << ans << '\n';    
    return 0;
}