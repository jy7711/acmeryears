#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n; 
char a[65][65];
bool vis[65][65][65][65];//判断是否访问
int an[65][65][65][65];//存答案
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
struct jy {int x1,y1,x2,y2,cnt;};//注意顺序
queue<jy> q;
void move(int x1, int y1, int x2, int y2, int cnt)
{
    for (int i = 0; i < 4; i++) {
        int nx1, nx2, ny1, ny2;
        nx1 = dx[i] + x1, nx2 = dx[i] + x2;
        ny1 = dy[i] + y1, ny2 = dy[i] + y2;
        //碰到障碍
        if (nx1 < 1 || nx1 > n || ny1 < 1 || ny1 > n || a[nx1][ny1] == '#') nx1 = x1, ny1 = y1;
        if (nx2 < 1 || nx2 > n || ny2 < 1 || ny2 > n || a[nx2][ny2] == '#') nx2 = x2, ny2 = y2;
        //访问过
        if (vis[nx1][ny1][nx2][ny2]) continue;
        q.push({nx1,ny1,nx2,ny2,cnt+1});
    } 
    return;
}
int main()
{
    //竟然是暴力60*60*60*60的bfs吗
    ios::sync_with_stdio(false), cin.tie(0);
    memset(vis, 0, sizeof(vis));
    memset(an, 0, sizeof(an));
    cin >> n;
    int x1, x2, y1, y2;//因为写了很多个x1,x2,y1,y2所以不能放全局
    x1 = x2 = y1 = y2 = -1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j]; //记录初始坐标
            if (a[i][j] == 'P') {
                if (x1 == -1) x1 = i, y1 = j;
                else x2 = i, y2 = j;
            }
        }
    }
    q.push({x1,y1,x2,y2,0});//注意和结构体写的顺序不能错，不然存的不对
    while (!q.empty()) {
        jy t = q.front();
        int x1 = t.x1, x2 = t.x2, y1 = t.y1, y2 = t.y2, cnt = t.cnt;
        q.pop();
        if (vis[x1][y1][x2][y2]) continue;
        vis[x1][y1][x2][y2] = 1; an[x1][y1][x2][y2] = cnt;
        move(x1,y1,x2,y2,cnt);
    }
    
    ll ans = 1e18;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (an[i][j][i][j] != 0) ans = min(ans,(ll)an[i][j][i][j]);
        }
    }
    cout << (ans == 1e18 ? -1 : ans) << '\n';
    return 0;
}