#include <bits/stdc++.h>
using namespace std;
int t,n,q,l,r; 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cin >> t;
    while (t--) {
        cin >> n >> q;
        vector<int> a(n+1),b(n+1,0),c(n+1,0);
        int cnt0 = 0, cnt1 = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            if (a[i] == 0) cnt0++;
            else cnt1++;
            b[i] = cnt0;
            c[i] = cnt1;
        }
        vector<int> e(n+1,0);
        for (int i = 2; i <= n; i++) {
            if (a[i] == a[i-1]) e[i]++;
            e[i] += e[i-1];
        }
        while (q--) {
            cin >> l >> r;
            if ((b[r]-b[l-1])%3 == 0 && (c[r]-c[l-1])%3 == 0) {
                if (e[r]-e[l+1] > 0) cout << (r-l+1)/3 << '\n';
                else cout << (r-l+1)/3+1 << '\n';
            }
            else cout << "-1\n";
        }
    }
    return 0;
}