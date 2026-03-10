#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() 
{
    ll n, m, d; cin >> n >> m >> d;
    ll ans = n;
    if (m > d) cout << n << '\n';
    else cout << n/(d/m+1)+((n%(d/m+1) != 0) ? 1 : 0) << '\n';
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}