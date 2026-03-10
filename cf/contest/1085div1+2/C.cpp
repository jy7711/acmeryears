#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct jy {
    ll gg = 0;
    vector<int> son;
};
void ac()
{
    ll n, h; cin >> n >> h;
    vector<int> a(n+2, 0), d(n+2, 0);
    a[0] = h; a[n+1] = h;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 0; i <= n+1; i++) d[i] = h - a[i];
    ll com = 0, mn = 1e9+7;
    for (int i = 1; i <= n; i++) mn = min(mn, (ll)d[i]);
    com = mn*n; h -= mn;
    for (int i = 1; i <= n; i++) d[i] -= mn;
    //公共加区块加私有
    vector<jy> an(n);
    ll nowdeep = h, l = 0, leftmax = h;
    for (int i = 1; i <= n; i++) {
        if (a[i] < nowdeep) 
            an[l].gg += d[i], nowdeep = a[i];
        else if (a[i] == nowdeep) an[l].gg += d[i];
        else {
            an[l].gg += d[i];
            an[l].gg -= min({leftmax, (ll)a[i]}) - nowdeep;
            an[l].son.push_back(min({leftmax, (ll)a[i]}) - nowdeep);
            nowdeep = a[i]; leftmax = a[i];
        }
        if (a[i] == h) l++, nowdeep = a[i], leftmax = a[i];
    }
    vector<ll> cal;
    ll ans = 0;
    for (int i = 0; i <= l; i++) {
        sort(an[i].son.begin(),an[i].son.end(), greater<>());
        if (an[i].son.size() > 1) 
            ans = max(an[i].gg + an[i].son[0] + an[i].son[1], ans);
        cal.push_back(an[i].gg + (an[i].son.size() ? an[i].son[0] : 0));
    }
    sort(cal.begin(),cal.end());
    if (cal.size() > 1) ans = max((ll)cal[0] + cal[1], ans);
    cout << ans + com << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t; cin >> t;
    while (t--) ac();
    return 0;
}