#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5+7;
vector<pair<ll,ll>> a[N];
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int n, m; cin >> n >> m;
    for (int i = 0, u, v, w; i < m; i++) {
        cin >> u >> v >> w;//邻接表建无向图
        a[u].push_back({w, v});
        a[v].push_back({w, u});
    }
    vector<ll> dis(n+1, 1e18);
    vector<int> head(n+1, 0);
    vector<bool> vis(n+1, 0);
    //用小堆顶的优先队列优先处理边权较小的边
    priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> q;
    q.push({0,1}); dis[1] = 0;
    while (!q.empty()) {
        auto [w, u] = q.top();//先存值，后存点
        //cout << "当前值和点： " << w << ' ' << u << '\n';
        q.pop();
        if (vis[u]) continue;
        vis[u] = 1;
        for (auto [val, v] : a[u]) {
            if (val+w < dis[v]) dis[v] = val+w, q.push({val+w,v}), head[v] = u;  
        }
    }
    if (dis[n] == 1e18) {
        cout << "-1\n";
        return 0;
    }
    vector<int> ans; ans.push_back(n);
    while (head[n]) {
        n = head[n];//头插法找上一个节点
        ans.push_back(n);
    }//因为是头插所以从后往前
    for (int i = ans.size()-1; i >= 0; i--) cout << ans[i] << ' ';
    cout << '\n';
    return 0;
}