#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n+1,0), b(n+1,0), c(n+1,0);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        for (int i = 0; i < n; i++) cin >> c[i];
        int c1 = 0, c2 = 0;
        for (int i = 0; i < n; i++) {
            bool gg = 1;
            for (int j = 0; j < n; j++) {
                if (a[j] >= b[(i+j)%n]) {gg = 0; break;}
            }
            if (gg) c1++;
            else gg = 1;
            for (int j = 0; j < n; j++) {
                if (b[j] >= c[(i+j)%n]) {gg = 0; break;}
            }
            if (gg) c2++;
        }
        cout << 1ll*n*c1*c2 << '\n';
    }
    return 0;
}