#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll n; cin >> n;
    ll ans = 0;
    for (int i = 1; i <= n; i++) ans += i;
    cout << ans << '\n';
    return 0;
}