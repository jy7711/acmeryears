#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n, q; cin >> n >> q;
    vector<ll> mp(n+1); 
    for (int i = 1; i <= n; i++) mp[i]++;
    int i = 1;
    while (q--) {
        int x, y; cin >> x >> y;
        ll cnt = 0;
        while (i <= x) {
            cnt+=mp[i];
            mp[i] = 0;
            i++;
        } 
        mp[y] += cnt;
        cout << cnt << '\n';
    }
    return 0;
}