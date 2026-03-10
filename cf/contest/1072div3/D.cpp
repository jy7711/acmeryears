#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 998244353;
ll C(ll k, ll n) {
    if (k < 0 || k > n) return 0;
    if (n-k < k) k = n-k;
    ll res = 1; ll kk = k;
    for (int i = 1; i <= k; i++) res = res*(n-i+1)/i;
    return res; 
}
void ac()
{
    ll n, k; cin >> n >> k;
    ll sum = log2(n);
    ll ans = 0;
    for (int i = 0; i < sum; i++) {
        //当前位数全1也<=k
        if (i*2+1 <= k) continue;
        //全0也>k
        else if (i+1 > k) ans += 1ll << i;
        //全0<=k
        else {
            ll kk = k-i;//kk是可以改几个1
            //cout << kk << ' ' << i << '\n';
            for (int j = kk; j <= i; j++) {
                ans += C(j, i);
            }
        }
        //cout << ans << ' ';
    }
    if (sum+1 > k) ans++;
    cout << ans << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t = 1; cin >> t;
    while (t--) {
        ac();
    }   
    return 0;
}
