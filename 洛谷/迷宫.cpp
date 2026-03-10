#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int dx[] = {-1,1,0,0};
int dy[] = {0,0,1,-1};
int ans = 0;
int n, m, t; 
int xa,ya,xb,yb; 
int a[20][20];
bool b[20][20];
void dfs(int x, int y)
{
    if (x == xb && y == yb) {
        ans++;
        return;
    }
    for (int i = 0; i < 4; i++) {
        int X = x + dx[i], Y = y + dy[i];
        if (X<1||X>n||Y<1||Y>m||b[X][Y]||a[X][Y]) continue;
        b[X][Y] = 1;
        dfs(X,Y);
        b[X][Y] = 0;
    }
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cin >> n >> m >> t;
    cin >> xa >> ya >> xb >> yb;
    for (int i = 0; i < t; i++) {
        int x, y; cin >> x >> y;
        a[x][y] = 1;
    }
    b[xa][ya] = 1;
    dfs(xa,ya);
    cout << ans << '\n';
    return 0;
}