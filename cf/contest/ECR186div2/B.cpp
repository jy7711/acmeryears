#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int a, b; cin >> a >> b;
        int c1 = 0, c2 = 0;
        int aa = a, bb = b, n = 1;
        while (aa >= 0 && bb >= 0) {
            if (c1 & 1) aa -= (n << c1);
            else bb -= (n << c1);
            c1++;
        }
        aa = a, bb = b;
        while (aa >= 0 && bb >= 0) {
            if (c2 & 1) bb -= (n << c2);
            else aa -= (n << c2);
            c2++;
        }
        cout << max(c1,c2)-1 << '\n';
    }
    return 0;
}