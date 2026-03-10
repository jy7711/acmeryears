#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
struct jy
{
    int i, j, c;
    jy(int x, int y, int z) {i = x, j = y, c = z;}
    jy() {}
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int n, m; cin >> n >> m;
    vector<vector<char>> a(n+2, vector<char> (m+2,'.'));
    vector<vector<int>> b(n+2, vector<int> (m+2,-1));
    vector<vector<int>> c(n+2, vector<int> (m+2,-1));
    queue<jy> q; pair<int,int> g;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            if (a[i][j] == 'S') q.push(jy(i,j,0));
            if (a[i][j] == 'G') g = {i,j};
            //cout << a[i][j];
        }    
        //cout << '\n';
    }
    while (!q.empty()) {
        auto[x,y,z] = q.front();
        //cout << x << ' ' << y << ' ';
        q.pop();
        bool gg = 0;
        if (a[x][y] == '?') z++, gg = 1;
        // if (z & 1) cout << c[x][y] << '\n';
        // else cout << b[x][y] << '\n';
        if (b[g.first][g.second] != -1) {
            cout << b[g.first][g.second]+1 << '\n';
            return 0;
        }
        if (c[g.first][g.second] != -1) {
            cout << c[g.first][g.second]+1 << '\n';
            return 0;
        }
        for (int k = 0; k < 4; k++) {
            int nx = x + dx[k], ny = y + dy[k];
            if (nx < 1 || ny < 1 || nx > n || ny > m || a[nx][ny] == '#' || 
            ((c[nx][ny] != -1 || a[nx][ny] == 'o') && z & 1) || ((b[nx][ny] != -1 || a[nx][ny] == 'x') && z%2 == 0)) continue;
            if (z & 1) {
                if (!gg) c[nx][ny] = c[x][y] + 1;
                else c[nx][ny] = b[x][y] + 1;
            }
            else {
                if (!gg) b[nx][ny] = b[x][y] + 1;
                else b[nx][ny] = c[x][y] + 1;
            }
            q.push(jy(nx,ny,z));
        }
    }
    cout << "-1\n"; 
    return 0;
}