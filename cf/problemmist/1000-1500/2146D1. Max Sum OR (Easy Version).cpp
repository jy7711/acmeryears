#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll N = 2e5 + 7; 
ll l, r; ll anss = 0;
ll ans[N];
void solve(ll l, ll r) 
{
    if (r-l < 0) return;
    if (r-l == 0) {
        ans[l] = l;
        anss += 2*(l|l);
        return;
    }
    if (r-l == 1) {
        ans[l] = r;
        ans[r] = l;
        anss += 2* (l | r);
        return;
    } 
    int j = 31;
    for (j = 31; j >= 0; j--) {
        if (r >> j & 1) break;
    }
    ll l1 = 0;
    for (int i = j; i >= 0; i--) {
        if (r >> i & 1) ;
        else l1 += 1ll << i;
    }  
    
    for (int i = r; i >= l1; i--) {
        ans[i] = l1 + (r-i);
    }
    anss += (r-l1+1) * (r | l1);
    solve(l, l1-1ll);
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        anss = 0;
        cin >> l >> r;
        solve(l, r);
        cout << anss << '\n';
        for (int i = 0; i <= r; i++) cout << ans[i] << ' ';
        cout << '\n';
    }
    return 0;
}