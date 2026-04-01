#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n; cin >> n;
    vector<int> a(n+1, 0);
    for (int i = 1; i <= n; i++) cin >> a[i];

    ll ans = 0;
    for (int d = 1; d*d <= n; d++) {
        for (int i = 1; i <= n; i++) {
            if (a[i] >= d) {
                ll j = i - 1ll * a[i] * d;
                if (j >= 1 && a[j] == d) ans++;
            }
            if (a[i] > d) {
                ll j = i + 1ll * a[i] * d;
                if (j <= n && a[j] == d) ans++;
            }
        }  
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