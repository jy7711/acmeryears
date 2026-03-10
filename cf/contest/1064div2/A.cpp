#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; string s;
        cin >> n >> s;
        int ans = 0;
        for (int i = n-1; i >= 0; i--) {
            if (s[n-1] != s[i]) ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}