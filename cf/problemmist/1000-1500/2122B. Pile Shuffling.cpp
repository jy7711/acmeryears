#include <bits/stdc++.h>
using namespace std;
int t, n, a, b, c, d;
long long ans = 0;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cin >> t;
    while (t--) {
        cin >> n;
        while (n--) {
            cin >> a >> b >> c >> d;
            if (b > d) ans += min(a,c) + b-d;
            if (a > c) ans += a - c;
        }
        cout << ans << '\n';
        ans = 0;
    }
    return 0;
}