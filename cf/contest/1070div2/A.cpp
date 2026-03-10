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
        vector<int> a(n);
        vector<bool> b(n,1);
        for (int i = 0; i < n; i++) cin >> a[i];
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                if (a[j] < a[i] && b[j]) ans++, b[j] = 0;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}                                                                                          