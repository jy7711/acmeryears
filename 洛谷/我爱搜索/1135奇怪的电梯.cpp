#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll n, a, b; 
vector<int> d(207, 0), ans(207,-1);
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++) cin >> d[i];
    queue<pair<int,int>> q;
    q.push({a, 0});
    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        if (ans[x] != -1) continue;
        ans[x] = y;
        if (x + d[x] <= n) q.push({x+d[x], y+1});
        if (x - d[x] >= 1) q.push({x-d[x], y+1});
    }
    cout << ans[b] << '\n';
    return 0;
}