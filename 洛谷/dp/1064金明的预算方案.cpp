#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int n, m; cin >> n >> m;
    vector<int> dp(2e5+7, 0);
    vector<pair<int,int>> a[77];
    vector<int> v(77), p(77), q(77);
    for (int i = 1; i <= m; i++) {
        cin >> v[i] >> p[i] >> q[i];
        if (v[i] <= n && !q[i]) {
            a[i].push_back({v[i], p[i]*v[i]});
        }
    }
    for (int i = 1; i <= m; i++) {
        if (v[i] <= n && q[i]) {
            int s = a[q[i]].size();
            for (int j = 0; j < s; j++) {
                if (v[i]+a[q[i]][j].first <= n) {
                    a[q[i]].push_back({a[q[i]][j].first + v[i], a[q[i]][j].second + v[i]*p[i]});
                }
            }
        }
    }
    
    for (int i = 1; i <= m; i++) {
        for (int j = n; j >= 0; j--) {
            for (int k = 0; k < a[i].size(); k++) {
                if (j >= a[i][k].first) {
                    dp[j] = max(dp[j], dp[j-a[i][k].first] + a[i][k].second);
                }
            }
        }
    }

    cout << dp[n] << '\n';
    return 0;
}