#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    ll n; cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i], a[i]--;
    ll cnt = a[0];
    int i;
    // for (int i = 0; i < n; i++) cout  << a[i] << ' ';
    // cout << '\n';
    for (i = 1; i < n; i++) {
        if (cnt <= 0) break;
        cnt = max(cnt-1,a[i]);
        
    }
    cout << i << '\n';
    return 0;
}