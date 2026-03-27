#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll n, m, cnt = 0; 
vector<vector<char>> b;
vector<vector<int>> a;
vector<vector<bool>> vis;
vector<vector<pair<int,int>>> head;
vector<vector<pair<int,int>>> nxt;
void dfs(int x, int y) 
{
    if (vis[x][y]) return;
    vis[x][y] = 1;
    if (b[x][y] == 'u') {
        if (x-a[x][y] > 0) nxt[x][y] = {x-a[x][y],y}, head[x-a[x][y]][y] = {x, y}, dfs(x-a[x][y], y);
    }
    else if (b[x][y] == 'd') {
        if (x+a[x][y] <= n) nxt[x][y] = {x+a[x][y],y}, head[x+a[x][y]][y] = {x, y}, dfs(x+a[x][y], y);
    }
    else if (b[x][y] == 'l') {
        if (y-a[x][y] > 0) nxt[x][y] = {x,y-a[x][y]}, head[x][y-a[x][y]] = {x, y}, dfs(x, y-a[x][y]);
    }
    else if (b[x][y] == 'r') {
        if (y+a[x][y] > 0) nxt[x][y] = {x,y+a[x][y]}, head[x][y+a[x][y]] = {x, y}, dfs(x, y+a[x][y]);
    }
    return;
}
bool check(int x, int y) 
{
    for (int i = 1; i <= n; i++) 
        for (int j = 1; j <= m; j++) vis[i][j] = 0;
    vis[x][y] = 1;
    for (int i = nxt[x][y].first, j = nxt[x][y].second; nxt[i][j].first != -1;) {
        vis[i][j] = 1; 
        i = nxt[i][j].first; j = nxt[i][j].second;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (!vis[i][j]) return 0;
        }
    }
    return 1;
}
void ac()
{
    cin >> n >> m;
    a.resize(n+1, vector<int> (m+1, 0));
    b.resize(n+1, vector<char> (m+1, '1'));
    vis.resize(n+1, vector<bool> (m+1, 0));
    head.resize(n+1, vector<pair<int,int>> (m+1, {-1,-1}));
    nxt.resize(n+1, vector<pair<int,int>> (m+1, {-1,-1}));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) cin >> b[i][j];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) cin >> a[i][j];
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (vis[i][j]) continue;
            dfs(i, j);
        }
    }
    int c1 = 0, c2 = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (head[i][j].first == -1) {
                if (check(i,j)) cout << "Yes\n";
                else cout << "No\n";
                return;
            }
        }
    }
    if (check(1,1)) cout << "Yes\n";
    else cout << "No\n";           
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t = 1; cin >> t;
    while (t--) ac();
    return 0;
}