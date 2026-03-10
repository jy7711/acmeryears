#include <bits/stdc++.h>
using namespace std;
#define int long long 
void ac() {
    int n, l; cin >> n >> l;
    int ans = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < l; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] >> i & 1) cnt++;
        }
        if (cnt > n/2) ans += (1ll<<i);   
    }
    cout << ans << '\n';
    return;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) ac();
    return 0;
}