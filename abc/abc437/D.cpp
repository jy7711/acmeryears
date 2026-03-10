#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 998244353;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n, m; cin >> n >> m;
    vector<ll> a(n+1,0), b(m+1,0), c(n+1,0);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int j = 1; j <= m; j++) cin >> b[j];
    sort(a.begin()+1,a.end());
    for (int i = 1; i <= n; i++) c[i] = (c[i-1] + a[i])%mod;
    ll ans = 0;
    for (int i = 1; i <= m; i++) {
        int l = upper_bound(a.begin()+1,a.end(),b[i]) - a.begin();
        l--;
        if (l == 1) ans = (ans + c[n] - n*b[i])%mod;
        else if (l == n+1) ans = (ans + n*b[i] - c[n])%mod;
        else ans = (ans + l*b[i] - c[l] + c[n] - c[l] - (n-l)*b[i])%mod;
    }
    cout << ans << '\n';
    return 0;
}