#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    ll x, y; cin >> x >> y;
    if (x * 2 == y) cout << "NO\n";
    else cout << "YES\n";
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t = 1; cin >> t;
    while (t--) ac();
    return 0;
}