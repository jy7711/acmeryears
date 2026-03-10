#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool cmp(pair<ll,ll> j, pair<ll,ll> y)
{
    return j.second > y.second;
}
int main()
{
    //你，1700，啊？
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        ll n, x; cin >> n;
        map<ll,ll> mp;
        ll ans1 = 0, ans2 = 0, cnt = 0;
        for (int i = 0; i < n; i++) {
            cin >> x;
            mp[x]++;
        }
        vector<pair<ll,ll>> b;
        for (auto &ele : mp) {
            b.push_back({ele.first,ele.second});
        }
        sort(b.begin(),b.end(),cmp);
        for (int i = 0; i < b.size(); i++) {
            ans1 += b[i].first/2 * b[i].second;
            ans2 += b[i].first/2 * b[i].second;
            cnt += b[i].first%2;
            if (cnt & 1) ans1 += b[i].first%2 * b[i].second; 
            else ans2 += b[i].first%2 * b[i].second;
        }
        cout << ans1 << ' ' << ans2 << '\n';
    }
    return 0;
}