#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        vector<int> a(n*2+1), b;
        map<int,int> mp;
        ll ans = 0; ll cnt = 0;
        for (int i = 1; i <= n*2; i++) {
            cin >> a[i];
            mp[a[i]]++;
            if (mp[a[i]] == 1) b.push_back(a[i]);
        }
        for (int i = 0; i < b.size(); i++) {
            if (mp[b[i]]%2 == 1) ans++;
            else cnt++;
        }
        if (ans) ans += min(cnt,n)*2;
        else {
            if ((n-min(n,cnt))%2 == 0) ans += min(cnt,n)*2; 
            else ans += min(cnt,n)*2-2;
        }
        cout << ans << '\n';
    }
    return 0;
}