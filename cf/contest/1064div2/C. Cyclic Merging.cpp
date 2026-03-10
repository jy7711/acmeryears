#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, m, k; cin >> n;
        vector<int> a(n+1);
        m = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] > a[m]) m = i;
        }
        a[n] = a[0];
        k = -a[m];
        for (int i = 0; i < n; i++) k += max(a[i],a[i+1]);
        cout << k << '\n';
    }
    return 0;
}