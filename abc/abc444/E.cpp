#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    
    ll n, d; cin >> n >> d;
    vector<int> a(n+1, 0);
    for (int i = 1; i <= n; i++) cin >> a[i];

    set<ll> s;
    s.insert(-1e18); s.insert(1e18);

    int j = 1; 
    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        auto it = s.lower_bound(a[i]);
        auto itl = it; itl--;
        while (abs(*it-a[i]) < d || abs(*itl-a[i]) < d) {
            s.erase(a[j++]);
            it = s.lower_bound(a[i]);
            itl = it; itl--;
        }
        s.insert(a[i]);
        ans += i-j+1;
    }
    cout << ans << '\n';
    return 0;
}