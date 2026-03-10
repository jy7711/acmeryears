#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        ll k, x, y, tt;
        cin >> k >> x;
        vector<int> a;
        tt = 1ll << k;
        y = (1ll << (k+1)) - x;
        bool gg = 0;
        while (x != tt) {
            gg = 1;
            if (x < y) {
                y -= x;
                x <<= 1;
                a.push_back(1);
            }
            else {
                x -= y;
                y <<= 1;
                a.push_back(2);
            }
        }
        cout << a.size() << '\n';
        if (gg) {
            for (int i = a.size()-1; i > -1; i--) cout << a[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}