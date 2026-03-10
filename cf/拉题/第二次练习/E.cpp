#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 7;
void ac()
{
    int n, m; cin >> n >> m;
    vector<ll> a(n),b(m);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    ll ans = 0;
    int l = 0, r = m - 1, i = 0, j = n - 1;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    while (i <= j && l <= r) {
        if (abs(a[j]-b[l]) > abs(b[r]-a[i])) ans += abs(a[j]-b[l]), j--, l++;
        else ans += abs(b[r]-a[i]), r--, i++;
    }

    cout << ans << '\n';

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