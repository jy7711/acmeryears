#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, m, q; 
        cin >> n >> m >> q;
        vector<int> a(m);
        for (int i = 0; i < m; i++) cin >> a[i];
        sort(a.begin(),a.end());
        while (q--) {
            int x; cin >> x;
            
            int l = lower_bound(a.begin(),a.end(),x) - a.begin();

            if (l == 0) cout << a[l]-1 << '\n';
            else if (l == m) cout << n-a[l-1] << '\n';
            else cout << (a[l]-a[l-1])/2 << '\n';
        }
    }
    return 0;
}