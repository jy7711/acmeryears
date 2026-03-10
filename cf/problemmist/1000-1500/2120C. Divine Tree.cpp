#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll n, m; 
void ac()
{
    cin >> n >> m;
    if (m < n || m > n*(n+1)/2) {
        cout << "-1\n";
        return;
    }
    vector<int> ans(n+1,-1);
    map<int,int> mp;
    for (int i = 1; i <= n; i++) mp[i]++;
    ll mm = m, mx = n, i = 1;
    while (mm > n) {
        if (mm - n >= mx) mm -= mx-1, mp[mx] = 0, ans[i++] = mx, mx--;
        else mp[mm - n + 1] = 0, ans[i++] = mm-n+1, mm -= mm - n;
        //cout << mm << ' ' << i << ' ' << mx << '\n';
    }
    for (int j = 1; j <= n; j++) {
        if (mp[j]) ans[i++] = j;
    }
    cout << ans[1] << '\n';
    for (int i = 1; i < n; i++) {
        cout << ans[i] << ' ' << ans[i+1] << '\n';
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) ac();
    return 0;
}