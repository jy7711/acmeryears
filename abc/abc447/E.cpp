#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll n, m, u, v, cnt, ans;
const int N = 2e5 + 7;
const int mod = 998244353;
int fa[N];
struct jy {
    ll u, v, w;
    friend bool operator < (jy j, jy y) {
        return j.w > y.w;
    }
} a[N];    

ll qk(ll a, ll b) 
{
    ll res = 1; a = a % mod;
    while (b) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

void init()
{
    for (int i = 1; i <= n; i++) fa[i] = i;
    return;
}

int find(int x) 
{
    return x == fa[x] ? x : fa[x] = find(fa[x]);
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    cin >> n >> m;
    init(); 
    for (int i = 1; i <= m; i++) {
        cin >> a[i].u >> a[i].v;
        a[i].w = qk(2, i);
    }
    sort(a+1, a+1+m);
    for (int i = 1; i <= m; i++) {
        if (cnt >= n-2) break;
        int x = a[i].u, y = a[i].v;
        x = find(x), y = find(y);
        if (x == y) continue;
        fa[x] = y; cnt++;  
    }
    
    for (int i = 1; i <= m; i++) {
        if (find(a[i].u) != find(a[i].v)) {
            ans = (ans + a[i].w) % mod;
        }
    }
    cout << (ans+mod)%mod << '\n';
    return 0;
}