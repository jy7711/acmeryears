#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<ll>> a(n+1, vector<ll> (m+1));
        ll mx = 0, mxnow = 0, cnt = 0; 
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> a[i][j];
                mx = max(a[i][j],mx);
            }
        }
        vector<ll> h(n+1,0), l(m+1,0);
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (a[i][j] == mx) h[i]++,l[j]++,cnt++;
            }
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (a[i][j] == mx) mxnow = max(mxnow,h[i]+l[j]-1);
                else mxnow = max(mxnow,h[i]+l[j]);
            }
        }
        if (mxnow == cnt) cout << mx-1 << '\n';
        else cout << mx << '\n';
    }
    return 0;
}