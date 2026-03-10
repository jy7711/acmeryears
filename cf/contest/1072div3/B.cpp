#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 998244353;
void ac()
{
    ll s, k, m; cin >> s >> k >> m;
    ll an = m%k, ss = m/k;
    if (k >= s) k = s;
    if (ss & 1) cout << max(k-an,0ll) << '\n';
    else {
        cout << max(s-an,0ll) << '\n';
    }
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t = 1; cin >> t;
    while (t--) {
        ac();
    }   
    return 0;
}
