#include <bits/stdc++.h>
using namespace std;
#define int long long
int dx[4] = {0,0,-1,1};
int dy[4] = {1,-1,0,0};
const int N = 1e3 + 7; 
int check[N][N];
signed main()
{
    //bfs
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n, m; cin >> n >> m;
    int ans = 0;
    vector<string> a(n+1);
    for (int i = 0; i < n; i++) cin >> a[i];
    queue<pair<int,int>> q;
    check[0][0] = 1; //后面特判会把初值不为0的跳过，所以起始点为0的话重复考虑
    q.push({0,0});   //起点 
    while (!q.empty()) {
        int ndx = q.front().first;//当前点坐标
        int ndy = q.front().second;
        for (int k = 0; k < 4; k++) {
            int x = ndx + dx[k];//当前点上下左右
            int y = ndy + dy[k];
            if (x < 0 || x >= n || y < 0 || y >= m) continue; //越界跳过
            if (check[x][y] || a[x][y] == '#') continue; //遇到障碍或考虑过跳过
            check[x][y] = check[ndx][ndy] + 1; //记录当前点的步数
            ans = max(ans,check[x][y]); //取最长路径
            q.push({x,y}); // 把刚才走的点放进队列
        }
        q.pop();//把当前点放出
    }
    cout << ans - 1 << '\n'; //因为初值是1，所以这里的最大值要-1
    return 0;
}