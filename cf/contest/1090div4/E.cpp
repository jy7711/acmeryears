#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n; cin >> n;
    vector<ll> a(n);
    ll ans = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            ans = max(ans, a[i] ^ a[j]);
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