#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << n*2 << '\n';
        for (int i = 1; i <= n; i++) {
            cout << i << ' ' << 1 << ' ' << i << '\n';
            cout << i << ' ' << (i == n ? i : i+1) << ' ' << n << '\n';
        }
    }
    return 0;
}