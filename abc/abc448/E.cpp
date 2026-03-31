#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll n, k, m, mod;
ll qk(ll a, ll b) 
{
    ll res = 1;  a %= mod;
    while (b) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    cin >> k >> m;
    mod = 9*10007*m;
    
    for (int i = 0; i < k; i++) {
        ll c, l; cin >> c >> l;
        ll an = qk(10, l);
        n = (n * an % mod + (an - 1 + mod) % mod * c % mod) % mod;
    }

    cout << n/m/9 << '\n';
    return 0;
}