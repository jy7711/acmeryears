#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll n, m, ans = 0;
char a[107][107];
bool b[107][107];
int dx[] = {-1,-1,-1,0,0,1,1,1};
int dy[] = {1,0,-1,1,-1,1,0,-1};
void bfs(int c, int d)
{
    ans++;
    queue<pair<int,int>> q;
    q.push({c,d});
    while (!q.empty()) {
        auto[x, y] = q.front();
        q.pop();
        if (b[x][y]) continue;
        b[x][y] = 1;
        for (int i = 0; i < 8; i++) {
            int nx = dx[i] + x;
            int ny = dy[i] + y;
            if (nx < 1 || nx > n || ny < 1 || ny > m || a[nx][ny] != 'W' || b[nx][ny] == 1) continue;
            q.push({nx,ny});
        }
    }
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) 
        for (int j = 1; j <= m; j++) cin >> a[i][j];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j] == 'W' && !b[i][j]) bfs(i,j);
        }
    }
    cout << ans << '\n';
    return 0;
}