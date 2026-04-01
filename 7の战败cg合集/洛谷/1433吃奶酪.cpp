#include <bits/stdc++.h>
using namespace std;
using ll = long long;
double a[17], b[17];
double dp[1<<15][17];
int n;
double ans = 1e18;
bool vis[17]; 
double dis(int x, int y) 
{
    return sqrt((a[x]-a[y])*(a[x]-a[y]) + (b[x]-b[y]) * (b[x]-b[y]));
}
//当前搜索深度 ， 当前所在位置， 当前的总距离， 当前状态的二进制掩码
void dfs(int h, int now, double sum, int b) 
{
    if (sum > ans) return;
    if (h == n) {
        ans = min(ans, sum);
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (vis[i]) continue;
        int nb = b + (1 << (i - 1));
        //记忆化剪枝， 如果dp[nb][i]已记录且不存在更小的值， 跳过
        if (dp[nb][i] != 0 && dp[nb][i] <= sum + dis(now, i)) continue;
        vis[i] = 1;
        dp[nb][i] = sum + dis(now, i);
        dfs(h+1, i, dp[nb][i], nb);
        vis[i] = 0;
    }
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i] >> b[i];
    dfs(0, 0, 0.0, 0);
    cout << fixed << setprecision(2) << ans << '\n';
    return 0;
}