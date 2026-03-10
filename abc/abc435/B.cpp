#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll n; cin >> n;
    ll ans = 0;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    b[0] = a[0];
    for (int i = 1; i < n; i++) b[i] = b[i-1] + a[i];
    //if (n == 1) {cout << "0\n"; return 0;}
    for (int i = 1; i < n; i++) {
        ll sum = b[i]; int k = 0; 
        for (int j = i; j < n; j++) {
            bool gg = 0;
            for (int l = k; l <= j; l++) {
                if (sum%a[l] == 0) {gg = 1; break;}
            } 
            if (!gg) ans++;
            //cout << i << ' ' << j << ' ' << sum << ' ' << k << ' ' << ans << '\n';
            sum += a[j+1] - a[k++];
            
        }
    }
    cout << ans << '\n';
    return 0;
}