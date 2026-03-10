#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int N = 3e5 + 7;
vector<pair<ll,ll>> a, b;
map<pair<ll,ll>> mp;
bool cmp(pair<ll,ll> j, pair<ll,ll> y)
{
    return j.first < y.first;
}
bool check(ll mid)
{
    
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        mp.clear();
        int n; cin >> n;
        ll x, y;
        for (int i = 1; i <= n; i++) {
            cin >> x >> y;
            a.push_back({x,y}); b.push_back({x,y});
            mp[{x,y}]++;
        }
        sort(a.begin(),a.end(),cmp);
        sort(b.begin(),b.end(),cmp);
        ll ans = 0;
        ll l = 0, r = n;
        while (l <= r) {
            ll mid = l + (r-l)/2;
            if (check(mid)) l = mid + 1, ans = mid;
            else r = mid - 1;
        }
        cout << ans << '\n';
    }
    return 0;
}