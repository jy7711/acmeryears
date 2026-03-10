#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t, n, m, x;
string s;
int main()
{
    //div1A卡预处理还不阴啊
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cin >> t;
    while (t--) {
        cin >> n >> m >> s;
        vector<ll> a, b; map<ll,ll> mp;
        for (int i = 1; i <= m; i++) {
            cin >> x; a.push_back(x);
            mp[x]++;
        }
        ll cnt = 0, cntt = (n*(n+1)/2);
        for (int i = 2; i < 3e5+7; i++) {
            if (!mp[i]) b.push_back(i),cnt++;
            if (cnt == cntt+7) break;
        }
        // for (auto &ele : b) cout << ele << ' ';
        // cout << '\n';
        vector<ll> ans(a);
        ll now = 1; ll point = 0;
        for (int i = 0; i < n; i++) {
            
            if (s[i] == 'A') {
                ans.push_back(now+1);
                if (now+1 == b[point]) point++;
                now++;
            }
            else {
                ans.push_back(b[point]); point++;
                now = b[point];
            }
            if (s[i] == 'B') point++;
            //cout << "now " << now << '\n';
        }
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        cout << ans.size() << '\n';
        for (int i = 0; i < ans.size(); i++) cout << ans[i] << ' ';
        cout << '\n';
    }
    return 0;
}