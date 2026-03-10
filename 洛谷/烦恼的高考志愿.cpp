#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n,m; cin >> m >> n;
    int ans = 0; 
    vector<int> a(m), b(n);
    for (int i = 0; i < m; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    sort(a.begin(),a.end());
    for (int i = 0; i < n; i++) {
        auto l = lower_bound(a.begin(),a.end(),b[i]);
        if (l == a.begin()) ans += abs(*l-b[i]);
        else if (l == a.end()) ans += abs(*(l-1)-b[i]);
        else ans += min(abs(*l-b[i]),abs(*(l-1)-b[i]));
    }
    cout << ans << '\n';
    return 0;
}