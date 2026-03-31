#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int n, m; cin >> n >> m;
    vector<int> a(m+1), b(m+1, 0);
    for (int i = 1; i <= m; i++) cin >> a[i];
    
    for (int i = 1; i <= n; i++) {
        int x, y; cin >> x >> y;
        b[x] += y;
    }

    ll ans = 0; 
    for (int i = 1; i <= m; i++) {
        ans += min(a[i], b[i]);
    }
    cout << ans << '\n';
    return 0;
}