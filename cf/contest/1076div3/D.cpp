#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    ll n, ans = 0; cin >> n;
    vector<ll> a(n), b(n+1), c(n+1,0);
    map<int,int> mp;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
    for (int i = 1; i <= n; i++) c[i] = c[i-1] + b[i];
    sort(a.begin(),a.end());
    // for (int i = 0; i < n; i++) cout << a[i] << ' ';
    // cout << '\n';
    // for (int i = 0; i <= n; i++) cout << b[i] << ' ';
    // cout << '\n';
    // for (int i = 0; i <= n; i++) cout << c[i] << ' ';
    // cout << '\n';
    int l = 0, r = 0;
    for (int i = 0; i < n; i++) {
        if (mp[a[i]]) continue;
        mp[a[i]]++;
        l = lower_bound(a.begin()+i,a.end(),a[i]) - a.begin();
        int cnt = n-l;
        r = upper_bound(c.begin()+1,c.end(),cnt) - c.begin();
        ans = max(1ll*(r-1)*a[i], ans);
        //cout << cnt << ' ' << l << ' ' << r << ' ' << a[i] << ' ' << ans << '\n';
    }
    cout << ans << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while (t--) ac();
    return 0;
}