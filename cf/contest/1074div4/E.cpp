#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac() 
{
    ll n, m, k; cin >> n >> m >> k;
    vector<ll> a(n), b(m);
    vector<pair<ll,ll>> l,r;
    vector<bool> vis(n,0);
    
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    b.push_back(-1e16); b.push_back(1e16); 
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    string s; cin >> s;
    
    for (int i = 0; i < n; i++) {
        ll x = lower_bound(b.begin(),b.end(),a[i]) - b.begin();  
        l.push_back({a[i]-b[x-1],i});
        r.push_back({b[x]-a[i],i});
    }
    sort(l.begin(),l.end());
    sort(r.begin(),r.end());
    
    ll c = 0, mx = 0, mn = 0, cnt = n, i = 0, j = 0;
    for (int h = 0; h < k; h++) {
        if (s[h] == 'L') c--;
        else c++;
        if (c < mn) {
            mn = c;
            while (i < n && l[i].first <= -c) {
                if (!vis[l[i].second]) vis[l[i].second] = 1, cnt--;
                i++;
            }
        }
        if (c > mx) {
            mx = c;
            while (j < n && r[j].first <= c) {
                if (!vis[r[j].second]) vis[r[j].second] = 1, cnt--;
                j++;
            }
        }
        cout << cnt << ' ';
    }
    cout << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t = 1; cin >> t;
    while (t--) {
        ac();
    }
    return 0;
}