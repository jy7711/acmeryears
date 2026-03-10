#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n; cin >> n;
    vector<ll> a(n+1,0), b(n+1,0);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];

    ll mx = 0, mn = 0;
    for (int i = 1; i <= n; i++) {
        ll x = max(mx-a[i],b[i]-mn), y = min(mn-a[i],b[i]-mx);
        mx = x;
        mn = y;
    }
    cout << mx << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) ac();
    return 0;
}