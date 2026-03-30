#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n; cin >> n;
    vector<int> a(n+1, 0), b(n+1, 0), c(n+1, 0);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];

    if (__gcd(a[1], a[2]) != a[1]) c[1] = __gcd(a[1], a[2]);
    else c[1] = a[1];

    for (int i = 2; i < n; i++) {
        int gg = __gcd(a[i], a[i-1]);
        int jj = __gcd(a[i], a[i+1]);
        int hh = __gcd(gg, jj);
        if (gg/hh*jj != a[i]) c[i] = gg/hh*jj;
        else c[i] = a[i];
    }
    
    if (__gcd(a[n], c[n-1]) != a[n]) c[n] = __gcd(a[n], c[n-1]);
    else c[n] = a[n];
    
    // for (int i = 1; i <= n; i++) cout << a[i] << ' ';
    // cout << '\n';
    // for (int i = 1; i <= n; i++) cout << c[i] << ' ';
    // cout << '\n';

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] != c[i]) ans++;
    } 
    cout << ans << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t = 1; cin >> t;
    while (t--) ac();
    return 0;
}