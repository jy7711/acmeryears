#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 7;
ll n, m, cnt, ans;
int fa[N];
struct jy {
    int u, v, w;
    friend bool operator < (jy j, jy y) { 
        return j.w < y.w; 
    } //w按从小到大排序
} a[N];

void init()
{
    //并查集的初始化
    for (int i = 1; i <= n; i++) fa[i] = i;
    return;
}

int find(int x) 
{
    //并查集的查询操作
    return x == fa[x] ? x : fa[x] = find(fa[x]);
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    cin >> n >> m;
    init();
    for (int i = 1; i <= m; i++) 
        cin >> a[i].u >> a[i].v >> a[i].w;
    sort(a+1, a+1+m);
    for (int i = 1; i <= m; i++) {
        int x = a[i].u, y = a[i].v;
        // 并查集的合并操作
        x = find(x), y = find(y);
        if (x == y) continue;
        fa[x] = y;  cnt++;
        ans += a[i].w;
        if (cnt == n-1) break;
    }
    cnt == n-1 ? (cout << ans) : (cout << "orz");
    return 0;
}