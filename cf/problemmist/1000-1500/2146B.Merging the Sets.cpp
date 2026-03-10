#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        ll n, m; cin >> n >> m;
        vector<int> a[n+7];
        vector<int> mp(m+7);
        vector<int> l;
        for (int i = 0; i < n; i++) {
            int cc; cin >> cc;
            l.push_back(cc);
            for (int j = 0; j < cc; j++) {
                int k; cin >> k;
                a[i].push_back(k); 
                mp[k]++;
            }
        }
        bool g = 0;
        for (int i = 1; i <= m; i++) {
            if (mp[i] == 0) { g = 1; break; }
        }
        if (g) { cout << "NO\n"; continue; }
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            bool gg = 0;
            for (int j = 0; j < l[i]; j++) {
                if (mp[a[i][j]] == 1) {gg = 1; break;}
            }
            if (!gg) cnt++;
            if (cnt > 1) break;
        }
        if (cnt > 1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}