#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5+7;
int a[N];
bool ans[N], vis[N];
vector<vector<int>> b(N);
map<int,int> mp;
ll n; 
void dfs(int root, bool now)
{
    mp[a[root]]++; vis[root] = 1;
    if (mp[a[root]] > 1 || now == 1) ans[root] = 1, now = 1;
    for (int i = 0; i < b[root].size(); i++) {
        if (vis[b[root][i]]) continue;
        dfs(b[root][i], now);
    }
    mp[a[root]]--;
    return;
}
void ac()
{
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i < n; i++) {
        int u, v; cin >> u >> v;
        b[u].push_back(v);
        b[v].push_back(u);
    }
    dfs(1, 0);
    for (int i = 1; i <= n; i++) {
        if (ans[i]) cout << "Yes\n";
        else cout << "No\n";
    }
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t = 1; //cin >> t;
    while (t--) ac();
}