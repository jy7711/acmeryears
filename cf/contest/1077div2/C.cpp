#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    ll mx = -1, mn = 1e18 + 7, ans = 1e18 + 7;
    for (int i = 0; i < n; i++)
        cin >> a[i], mx = max(mx, a[i]), mn = min(a[i], mn);
    vector<ll> b = a;
    sort(b.begin(), b.end());
    if (a == b)
    {
        cout << "-1\n";
        return;
    }
    for (int i = 0; i < n; i++)
        if (a[i] != b[i])
            ans = min(ans, max(a[i] - mn, mx - a[i]));
    cout << ans << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        ac();
    return 0;
}