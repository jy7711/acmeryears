#include <bits/stdc++.h>
using namespace std;
#define int long long
void ac()
{
    int n; cin >> n;
    vector<int> a(n+1),mn(n+2,2e7),mx(n+2,-1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) mn[i] = min(mn[i-1],a[i]);
    for (int i = n; i >= 1; i--) mx[i] = max(mx[i+1],a[i]);
    for (int i = 1; i < n; i++) {
        if (mn[i] > mx[i+1]) {cout << "No\n"; return;}
    }
    cout << "Yes\n";
    return;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        ac();
    }
    return 0;
}