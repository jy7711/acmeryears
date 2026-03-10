#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 7;
void ac()
{
    int n; cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    ll ans = 0;
    
    for (int i = 0; i < n; i++) {
        if (i & 1) ans += a[i];
        else ans -= a[i];
    }

    if (n&1 || ans >= 0) cout << "YES\n";
    else cout << "NO\n";

    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    int t; cin >> t; 
    while (t--) ac();

    return 0;
}