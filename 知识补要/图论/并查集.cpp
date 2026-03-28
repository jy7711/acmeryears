//大致题意是n个元素m次操作， 1是合并2是判断
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 7;
int n, m, z, x, y;
int fa[N], sz[N];
//初始化
void init()
{
    for (int i = 1; i <= n; i++) fa[i] = i, sz[i] = 1;
    return;
}
//查找
int find(int x) 
{
    return x == fa[x] ? x : fa[x] = find(fa[x]);
}
//合并
void unite(int x, int y)
{
    x = find(x), y = find(y);
    if (x == y) return;
    //将小树合并到大树上
    if (sz[x] < sz[y]) swap(x, y);
    fa[y] = x;
    sz[x] += sz[y];

    //简单的写法应该是
    //x = find(x), y = find(y);
    //if (x == y) return;
    //fa[x] = y; 
    return;
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    cin >> n >> m;
    init();
    
    while (m--) {
        cin >> z >> x >> y;

        if (z == 1) unite(x, y);
        else {
            cout << (find(x) == find(y) ? "Y\n" : "N\n");
        }
    }
    return 0;
}