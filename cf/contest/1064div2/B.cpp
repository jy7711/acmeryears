#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        double n, a, b;
        cin >> a >> b >> n;
        if (a >= b*n || b >= a) cout << "1\n";
        else cout << "2\n";
    }
    return 0;
}