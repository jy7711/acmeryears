#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, m, ex, ey; 
char a[320][320];
bool vis[320][320];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
map<char,pair<int,int>> mpx;
map<pair<int,int>,pair<int,int>> mp;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    cin >> n >> m;
    queue<pair<int,pair<int,int>>> q;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            if (a[i][j] == '#') vis[i][j] = 1;
            else if (a[i][j] == '@') q.push({0,{i,j}});
            else if (a[i][j] == '.') ;
            else if (a[i][j] == '=') ex = i, ey = j;
            else {
                if (mpx.count(a[i][j])) mp[{i,j}] = mpx[a[i][j]], mp[mpx[a[i][j]]] = {i,j};
                else mpx[a[i][j]] = {i,j};
            }
        }
    }
    while (!q.empty()) {
        int cnt = q.front().first;
        auto[x, y] = q.front().second;
        cout << cnt << ' ' << x << ' ' << y << '\n';
        q.pop();
        if (vis[x][y]) continue;
        if (a[x][y] == '=') {
            cout << cnt << '\n';
            return 0;
        }
        if (mpx.count(a[x][y])) {
            int nx = x, ny = y;
            nx = mp[{x,y}].first, ny = mp[{x,y}].second;
            x = nx, y = ny; 
        }
        for (int i = 0; i < 4; i++) {
            int nx = dx[i] + x;
            int ny = dy[i] + y;
            if (nx < 1 || nx > n || ny < 1 || ny > m || vis[nx][ny] || a[nx][ny] == '#') continue;
            q.push({cnt+1,{nx,ny}});
        }
        vis[x][y] = 1;
    }
    return 0;
}