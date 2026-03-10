#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) {
    ll t = b;
    while (b) {
        b = a%b;
        a = t;
        t = b;
    }
    return a;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        bool gg = 0; int j = 2; ll cc = 0;
        for (; j <= 100; j++) {
            for (int i = 0; i < n; i++) {
                cc = gcd(j,a[i]);
                if (cc == 1) {gg = 1; break;}
            }
            if (cc == 1) break;
        }
        if (gg) cout << j << '\n';
        else cout << "-1\n";
    }
    return 0;
}