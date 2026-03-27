#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int n; cin >> n;
    int sum = 0, ans = 0;
    vector<int> w(n+1, 0);
    vector<vector<int>> dp(107, vector<int> (2e5+7, 0));
    for (int i = 1; i <= n; i++) cin >> w[i], sum += w[i];

    for (int i = 1; i <= n; i++) {
        for (int j = sum; j > 0; j--) {
            if (j == w[i]) dp[i][j] = 1;
            else if (dp[i-1][j]) dp[i][j] = 1;
            else if (dp[i-1][j+w[i]]) dp[i][j] = 1;
            else if (dp[i-1][abs(j-w[i])]) dp[i][j] = 1;
        }
    }
    for (int x : dp[n]) 
        if (x) ans++;
    cout << ans << '\n';
    return 0;
}