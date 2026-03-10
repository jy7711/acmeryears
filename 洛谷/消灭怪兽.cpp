#include <bits/stdc++.h>
using namespace std;
using ll = long long;
map<int,int> mp;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n, k; cin >> n >> k;
    vector<ll> a(n+1,0), b(n+1,0); 
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) b[i] = b[i-1] + a[i];
    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        mp[b[i]%k]++;
        if (b[i]%k != 0) ans += mp[b[i]%k]-1;   
        else ans += mp[b[i]%k];
        //cout << ans << '\n';
    }
    cout << ans << '\n';
    return 0;
}