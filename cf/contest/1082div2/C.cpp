#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    int ans = 1;
    int last = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > last && a[i] <= a[i-1] + 1) continue;
        else last = a[i], ans++;
    }
    cout << ans << '\n';
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}