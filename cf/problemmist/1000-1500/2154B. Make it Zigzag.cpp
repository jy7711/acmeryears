#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n+1,0), b(n+1,0); b[0] = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            b[i] = max(b[i-1],a[i]);
            if (i%2 == 0) a[i] = b[i];
        }
        ll ans = 0;
        for (int i = 1; i < n; i++) {
            if (i & 1) {
                if (a[i] >= a[i+1]) ans+=a[i]-a[i+1]+1, a[i] = a[i+1]-1;
            } 
            else {
                if (a[i] <= a[i+1]) ans+=a[i+1]-a[i]+1, a[i+1] = a[i]-1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}