#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t, n, m;
bool cmp(pair<ll,ll> j, pair<ll,ll> y) 
{
    if (j.second == 0 || y.second == 0) 
        return j.second > y.second;    
    return j.first < y.first; 
}
void ac() 
{
    //div1+2超绝排序贪心二分竭尽全力题解战胜
    //题目链接：https://codeforces.com/contest/2164/problem/C
    ll x, ans = 0; cin >> n >> m;
    multiset<ll> a;
    vector<pair<ll,ll>> b(m);
    for (int i = 0; i < n; i++) {
        cin >> x; a.insert(x);
    }
    for (int i = 0; i < m; i++) cin >> b[i].first;
    for (int i = 0; i < m; i++) cin >> b[i].second;
    sort(b.begin(),b.end(),cmp);
    for (int i = 0; i < m; i++) {
        auto it = a.lower_bound(b[i].first);
        if (it != a.end()) {
            ll cc = *it;
            ans++;
            a.erase(it);
            if (b[i].second > 0) a.insert(max(cc,b[i].second));
        }
        else continue; 
    }    
    cout << ans << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) ac();
    return 0;
}