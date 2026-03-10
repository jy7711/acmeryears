#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    ll n, m; cin >> n >> m;
    vector<ll> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int l = 0, r = m-1;
    for (int i = 0; i < n; i++) {
        if (i & 1) for (int j = 0; j < 3; j++) cout << a[r] << ' ' << a[l] << ' ';
        else for (int j = 0; j < 3; j++) cout << a[l] << ' ' << a[r] << ' ';
        if (i & 1) l++, r--;
        cout << '\n';
    }
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while (t--) ac();
    return 0;
}