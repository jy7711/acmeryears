#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n; cin >> n;
    vector<ll> a(n+1,0), b(n+1,0), c(n+1,0);
    for (int i = 1; i <= n; i++) cin >> a[i];
    ll ans = 0, d = -7777;
    for (int i = 2; i <= n; i++) {
        b[i] = abs(a[i] - a[i-1]);
        ans += b[i];
    }
    for (int i = 2; i < n; i++) {
        c[i] = abs(a[i+1]-a[i-1]);
    }
    
    for (int i = 2; i < n; i++) {
        d = max(b[i]+b[i+1]-c[i], d);
    }
    d = max(b[2],d);
    d = max(b[n],d);
    ans -= d;
    cout << ans << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t = 1; 
    cin >> t;
    while (t--) ac();
    return 0;
}