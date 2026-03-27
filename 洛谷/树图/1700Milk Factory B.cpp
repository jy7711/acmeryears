#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<int> a[107];
bool vis[107], b[107];
void dfs(int x) 
{
    if (vis[x]) return;
    vis[x] = 1;
    for (auto y : a[x]) dfs(y);
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int n; cin >> n;
    
    for (int i = 1; i < n; i++) {
        int u, v; cin >> u >> v;
        a[u].push_back(v);
    }

    for (int i = 1; i <= n; i++) b[i] = 1;
    for (int i = 1; i <= n; i++) {
        memset(vis, 0, sizeof(vis));
        dfs(i); //cout << i << '\n';
        for (int j = 1; j <= n; j++) {
            //cout << j << ' ';
            if (!vis[j]) b[j] = 0;
        }
    }
    
    for (int i = 1; i <= n; i++) {
        if (b[i]) {
            cout << i << '\n';
            return 0;
        }
    }
    cout << "-1\n";
    return 0;
}