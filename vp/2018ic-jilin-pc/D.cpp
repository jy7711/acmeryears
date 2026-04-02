#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    ll x, y; cin >> x >> y;
    for (ll i = x+1; i < min(y, x+100); i++) {
        if (__gcd(i, x) == 1 && __gcd(y, i) == 1) {
            cout << i << '\n';
            return;
        }
    }
    cout << "-1\n";
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t; cin >> t;
    while (t--) ac();
    return 0;
}