#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll h, w, k, l, xh, yh, xv, yv;
char a[1507][1507];
bool vis[1507][1507];
struct jy {ll x1,y1,x2,y2;};
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    cin >> w >> h >> k >> l;// 宽 长 长左上 宽左上
    cin >> xh >> yh >> xv >> yv;// 
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) cin >> a[i][j];
    }
    queue<jy> q;
    q.push({xh,yh,xv,yv});
    while (!q.empty()) {

    }
    return 0;
}