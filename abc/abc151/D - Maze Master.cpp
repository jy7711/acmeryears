#include <bits/stdc++.h>
using namespace std;
#define int long long
int dx[4] = {0,0,-1,1};
int dy[4] = {1,-1,0,0};
int check[25][25];
signed main()
{
    //bfs的初体验
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n, m; cin >> n >> m;
    int ans = 0;//cout << 1;
    vector<string> a(n+1);
    for (int i = 0; i < n; i++) cin >> a[i];
    queue<pair<int,int>> q;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == '#') continue;
            for (int c = 0; c < n; c++) {
                for (int d = 0; d < m; d++) check[c][d] = 0;
            }
            check[i][j] = 1;
            q.push({i,j});
            while (!q.empty()) {
                int ndx = q.front().first;
                int ndy = q.front().second;
                for (int k = 0; k < 4; k++) {
                    int x = ndx + dx[k];
                    int y = ndy + dy[k];
                    if (x < 0 || x >= n || y < 0 || y >= m) continue;
                    if (check[x][y] || a[x][y] == '#') continue;
                    check[x][y] = check[ndx][ndy] + 1; 
                    ans = max(ans,check[x][y]);
                    q.push({x,y});
                }
                q.pop();
            }
        }
    }
    cout << ans - 1 << '\n';
    return 0;
}