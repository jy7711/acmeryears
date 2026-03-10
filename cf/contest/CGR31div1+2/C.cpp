#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    ll n, k; cin >> n >> k;
    if (k & 1) {
        for (int i = 0; i < k; i++) cout << n << ' ';
        cout << '\n';
        return;
    }
    vector<ll> ans(k+1,0);
    vector<ll> bit, tt;
    for (int i = 30; i >= 0; i--) {
        if (n >> i & 1) bit.push_back(1ll << i);
        else {
            if ((1ll << i) <= n) tt.push_back(1ll << i);
        }
    }
    int j = 1;
    for (int i = 0; i < bit.size(); i++) {
        for (int l = 1; l < k; l++) {
            ans[(j++)%(k)+1] += bit[i];
        }
    }
    for (int i = 0; i < tt.size(); i++) {
        vector<int> now;
        for (int l = 1; l <= k; l++) {
            if (ans[l] + tt[i] <= n) now.push_back(l);
        }
        for (int l = 0; l < now.size(); l++) {
            ans[now[l]] += tt[i];
        }
        if (now.size() & 1) ans[now[now.size()-1]] -= tt[i];
    }
    for (int i = 1; i <= k; i++) cout << ans[i] << ' ';
    cout << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t = 1; cin >> t;
    while (t--) ac();
}