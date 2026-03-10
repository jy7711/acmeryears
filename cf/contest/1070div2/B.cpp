#include <bits/stdc++.h>
using namespace std;
using ll = long long;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        vector<int> a(n,0);
        int ans = 0, cnt = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                cnt++;
                a[i] = cnt;
            }
            else {
                cnt = 0;
            }
        }
        if (s[0] == '0') a[0] = a[n-1] + 1;
        for (int i = 1; i < n; i++) {
            if (s[i] == '0') a[i] = a[i-1] + 1;
            else break;
        }
        for (int i = 0; i < n; i++) ans = max(ans,a[i]);
        cout << ans << '\n';
    }
    return 0;
}           