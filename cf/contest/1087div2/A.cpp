#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    ll n, c, k; cin >> n >> c >> k;
    vector<ll> a(n, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(),a.end());
    for (int i = 0; i < n; i++) {
        if (c >= a[i]) {
            if (k) {
                ll r = min(k, c-a[i]);
                k -= r;
                a[i] += r;    
            }
            c += a[i];
        }
        else break;
        //cout << i << ' ' << c << ' ' << k << '\n';
    }
    cout << c << '\n';
    return; 
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    while (t--) ac();
    return 0;
}