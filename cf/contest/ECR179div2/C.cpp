#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 5e5 + 7;
const ll A = 1e9 + 7; 
ll a[N];
void ac()
{
    ll n; cin >> n;
    map<ll,ll> mp;
    map<ll,ll> mp1;
    for (ll i = 1; i <= n; i++) {
        cin >> a[i]; mp1[a[i]]++;
        mp[a[i]] = max(mp[a[i]],mp1[a[i]]);
        if (a[i] != a[i-1] && i != 1) mp1[a[i-1]] = 0;  
    }
    ll ans = 1e18;
    for (auto &ele : mp1) mp[ele.first] = max(ele.second, mp[ele.first]); 
    for (auto &ele : mp) {
        //cout << ele.first << ' ' << ele.second << '\n';
        ll an = ele.first*(n-ele.second);
        ans = min(ans, an);
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