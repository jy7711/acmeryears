#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    ll n, l, r; 
    cin >> n >> l >> r;
    ll last = 0;
    for (int i = 1; i <= n; i++) {
        ll now = i;
        if (i == r) now = l-1;
        cout << (now ^ last) << ' ';
        last = now;
    }
    cout << '\n';
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