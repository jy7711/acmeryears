#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 7;
int n, m; 
vector<int> a[N];
vector<int> dp(N, 0);
void dfs(int x)
{
    if (dp[x]) return;
    for (auto y : a[x]) {
        dfs(y);
        dp[x] = max(dp[x], dp[y] + 1);
    }
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int x, y; cin >> x >> y;
        a[x].push_back(y);
    }
    for (int i = 1; i <= n; i++) dfs(i);
    int ans = 0;
    for (int i = 1; i <= n; i++) ans = max(ans, dp[i]);
    cout << ans << '\n';
    return 0;
}