#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll quick(ll a,ll b)
{
    ll res = 1;
    while (b) {
        if (b & 1) res = res*a;
        a = a*a;
        b/=2;
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    ll a[27]; ll b[27];
    for (int i = 0; i < 21; i++) a[i] = quick(3,i);
    b[0] = 3;
    for (int i = 1; i < 21; i++) b[i] = b[i-1]*3 + a[i-1];
    while (t--) {
        ll n; cin >> n;
        int i = 0; ll sum = 0;
        for (; i < 21; i++) if (a[i] > n) break;
        i--; 
        while (n) {
            if (a[i] <= n) {n -= a[i]; sum += b[i];}
            else i--;
        }
        cout << sum << '\n';
    }
    return 0;
}