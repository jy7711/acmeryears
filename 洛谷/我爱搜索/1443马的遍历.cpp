#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<vector<int>> a(450, vector<int> (450, -1));
int dx[] = {-2,-2,-1,-1,1,1,2,2};
int dy[] = {1,-1,2,-2,2,-2,1,-1};
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    queue<pair<int,pair<int,int>>> q;
    q.push({0,{x, y}});
    while (!q.empty()) {
        int cnt = q.front().first;
        int x = q.front().second.first;
        int y = q.front().second.second;
        q.pop();
        if (a[x][y] != -1) continue;
        a[x][y] = cnt;
        for (int i = 0; i < 8; i++) {
            int nx = dx[i] + x;
            int ny = dy[i] + y;
            if (nx < 1 || nx > n || ny < 1 || ny > m || a[nx][ny] != -1) continue;
            q.push({cnt+1,{nx,ny}});
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) cout << a[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}