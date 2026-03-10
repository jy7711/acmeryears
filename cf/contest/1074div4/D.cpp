#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac() 
{
    ll n, m, h; cin >> n >> m >> h;
    vector<ll> a(n), b(m), c(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i] >> c[i];
    int d = 0;
    for (int i = 0; i < m; i++) {
        a[b[i]-1] += c[i];
        if (a[b[i]-1] > h) {
            for (int j = d; j <= i; j++) a[b[j]-1] -= c[j];
            d = i + 1;
        }
    }
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
    cout << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t = 1; cin >> t;
    while (t--) {
        ac();
    }
    return 0;
}