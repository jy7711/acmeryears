#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll n, m, ans = 0;
char a[1007][1007];
bool b[1007][1007];
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
            if (nx < 1 || nx > n || ny < 1 || ny > m || a[nx][ny] != '#' || b[nx][ny] == 1) continue;
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
    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= m; j++) {
            int cnt = 0;
            if (a[i][j] == '#') cnt++;
            if (a[i-1][j] == '#') cnt++;
            if (a[i][j-1] == '#') cnt++;
            if (a[i-1][j-1] == '#') cnt++;
            if (cnt == 3) {
                cout << "Bad placement.\n";
                return 0;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j] == '#' && !b[i][j]) bfs(i,j);
        }
    }
    cout << "There are " << ans << " ships.\n";
    return 0;
}