#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll l, r; 
ll jy(ll a) 
{
    ll ans0 = 0;
    ans0 += a/2 + a/3 + a/5 + a/7;
    ans0 -= a/6 + a/10 + a/14 + a/15 + a/21 + a/35;
    ans0 += a/30 + a/42 + a/70 + a/105;
    ans0 -= a/210;
    return ans0;
}
void solve()
{
    ll ans = 0;
    ll ans1 = jy(l-1);
    ll ans2 = jy(r);
    ans = r - l +1 + ans1 - ans2;
    cout << ans << '\n';
    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    int t; cin >> t;
    while (t--) {
        cin >> l >> r;
        solve();
    }
    return 0;
}