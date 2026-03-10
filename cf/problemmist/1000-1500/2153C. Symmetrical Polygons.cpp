#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n; 
        vector<int> a(n),check,c;
        map<int,int> mp;
        ll ans = 0, cnt = 0;
        bool jj = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
            if (mp[a[i]] == 1) check.push_back(a[i]); 
            if (mp[a[i]] == 2) ans += a[i]*2, cnt += 2, mp[a[i]] = 0;
        }
        sort(check.begin(),check.end());
        for (int i = 0; i < check.size(); i++) {
            if (mp[check[i]] != 0) c.push_back(check[i]),jj = 1;
        }   
        sort(c.begin(),c.end());
        c.erase(unique(c.begin(),c.end()),c.end());
        if (jj) {
            ll aa = ans; ll cntt = cnt;
            for (int i = 0; i < c.size(); i++) {
                if (ans < aa + c[i] && cntt + 1 > 2) {
                    if (ans <= c[i]) continue;
                    ans = aa + c[i], cnt = cntt + mp[c[i]];
                } 
            }
            for (int i = 0; i < c.size()-1; i++) {
                if (ans < aa + c[i] + c[i+1] && cntt + 2 > 2) {
                    if (c[i+1] >= c[i] + aa) continue;
                    ans = aa + c[i] + c[i+1], cnt = cntt + 2;
                }
            }
        }
        if (cnt > 2) cout << ans << '\n';
        else cout << 0 << '\n';
    }
    return 0;
}