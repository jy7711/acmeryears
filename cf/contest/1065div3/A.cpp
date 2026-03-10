#include <bits/stdc++.h>
using namespace std;
using ll = long long;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        if (n%2 == 1) cout << 0 << '\n';
        else {
            cout << n/4+1 << '\n';
        }
    }
    return 0;
}