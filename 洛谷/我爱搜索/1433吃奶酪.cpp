#include <bits/stdc++.h>
using namespace std;
using ll = long long;
double a[17], b[17];
int n;
double ans = 1e18;
bool vis[17]; 
void dfs(int h, double x, double y, double sum) 
{
    if (sum > ans) return;
    if (h == n) {
        ans = min(ans, sum);
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (vis[i]) continue;
        vis[i] = 1;
        dfs(h+1, a[i], b[i], sum + sqrt((x-a[i])*(x-a[i]) + (y-b[i])*(y-b[i])));
        vis[i] = 0;
    }
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i] >> b[i];
    dfs(0, 0.0, 0.0, 0.0);
    cout << fixed << setprecision(2) << ans << '\n';
    return 0;
}