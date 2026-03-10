#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        ll n, k; cin >> n >> k;
        for (int i = 0; i < n; i++) {
            ll x; cin >> x;
            cout << x + x%(k+1)*k << ' ';
        }
        cout << '\n';
    }
    return 0;
}