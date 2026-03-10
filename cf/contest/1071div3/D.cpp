#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    ll l; cin >> l;
    map<ll,ll> mp;
    ll n = (1ll << l) - 1;
    cout << n << ' '; mp[n]++;
    for (int i = l-1; i >= 0; i--) {
        n -= 1ll << i;
        for (int j = n; j < 1 << l; j++) {
            if (mp[j] || (j & n) != n) continue;
            cout << j << ' ';
            mp[j]++;
        }
    }
    cout << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t = 1; 
    cin >> t;
    while (t--) ac();
    return 0;
}