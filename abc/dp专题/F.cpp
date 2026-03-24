#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    string s1, s2, ans; cin >> s1 >> s2;
    int n = s1.size(), m = s2.size();
    s1 = ' ' + s1; s2 = ' ' + s2;
    vector<vector<int>> dp(n+1, vector<int> (m+1, 0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s1[i] == s2[j]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    int x = n, y = m;
    while (x && y) {
        if (s1[x] == s2[y]) {
            ans += s1[x];
            x--;
            y--;
        }
        else if (dp[x][y] == dp[x][y-1]) y--;
        else x--;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << '\n';
    return 0;
}