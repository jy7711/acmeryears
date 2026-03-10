#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    ll n, h, k; cin >> n >> h >> k;
    vector<ll> a(n+1,0), b(n+1,0), c(n+1,0), d(n+2,0);//b是前缀和, c是前缀最小， d是后缀最大
    ll sum = 0;
    for (int i = 1; i <= n; i++) cin >> a[i], sum += a[i], b[i] = sum;
    ll mx = 0, mn = 1e18;
    for (int i = 1; i <= n; i++) {
        mn = min(mn, a[i]);
        c[i] = mn;
    }   
    for (int i = n; i >= 1; i--) {
        mx = max(mx, a[i]);
        d[i] = mx;
    }
    //d[n+1] = d[n];
    ll t = h/sum;//t轮开枪
    if (h%sum == 0) {
        cout << (t-1)*(n+k)+n << '\n';
        return;
    }
    ll ans = t*(n+k);
    h -= t*sum;
    ll cnt = 0;
    //cout << h << ' ';
    int l = 1, r = n; 
    while (l <= r) {
        int mid = l + (r-l)/2;
        if (b[mid] + d[mid+1] - c[mid] >= h || b[mid] >= h) cnt = mid, r = mid - 1;
        else l = mid + 1;
    }
    cout << ans+cnt << '\n';
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