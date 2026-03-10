#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, k, q; cin >> n >> k >> q;
        vector<int> a(n+1,0), b(n+1,0), ans(n+1,0);
        while (q--) {
            int c, l, r; cin >> c >> l >> r;
            if (c == 1) {
                for (int i = l; i <= r; i++) a[i]++;
            } 
            else {
                for (int i = l; i <= r; i++) b[i]++;
            }
        }    
        for (int i = 1; i <= n; i++) {
            if (a[i] && !b[i]) ans[i] = k;
            else if (b[i] && !a[i]) {
                ans[i] = i%k;
            }
            else if (a[i] && b[i]) ans[i] = k+1;
            else ans[i] = k+1;
        }
        // for (int i = 1; i <= n; i++) cout << a[i] << ' ';
        // cout << '\n';
        // for (int i = 1; i <= n; i++) cout << b[i] << ' ';
        // cout << '\n';
        for (int i = 1; i <= n; i++) cout << ans[i] << ' ';
        cout << '\n';
        //cout << '\n';
    }
    return 0;
}