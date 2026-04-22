#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e7 + 7;
const int mod = 998244353;
const int M = 2e5 + 7;
bool vis[N];//判断质数
int pr[N], pp[N], pi, a[M]; // 质数表， 最小质因数, 索引
void init() 
{
    for (int i = 2; i < N; i++) {
        if (!vis[i]) {
            pp[i] = i;
            pr[++pi] = i;
        }
        for (int j = 1; j <= pi && i * pr[j] < N; j++) {
            vis[i * pr[j]] = 1;    
            pp[i * pr[j]] = pr[j];
            if (i % pr[j] == 0) break;
        }
    }
    return;
}

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

void ac()
{
    int n; cin >> n;
    unordered_map<int,int> mp, mp2;
    
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        ll x = a[i];
        while (x > 1) {
            ll px = pp[x], cnt = 0;
            while (x > 1 && x % px == 0) {
                x /= px;
                cnt++;
            }
            if (cnt > mp[px]) mp2[px] = mp[px], mp[px] = cnt;
            else if (cnt > mp2[px]) mp2[px] = cnt;
        }
    }

    ll ans = 1;
    for (auto [x, y] : mp) ans = ans * qk(x, y) % mod;

    for (int i = 1; i <= n; i++) {
        ll cur = ans, x = a[i];
        while (x > 1) {
            ll px = pp[x], cnt = 0;
            while (x > 1 && x % px == 0) {
                x /= px;
                cnt++;
            }
            if (cnt == mp[px]) 
                cur = cur * qk(qk(px, mp[px] - mp2[px]), mod - 2) % mod;
        }
        cout << cur << ' ';
    }
    cout << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    init();
    int t = 1; cin >> t;
    while (t--) ac();
    return 0;
}