#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int n, mx = 0; cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++) cin >> a[i], mx = max(mx, (int)a[i].size());

    for (int i = 0; i < n; i++) {
        while (a[i].size() < mx) a[i] = '.' + a[i] + '.';
    }

    for (int i = 0; i < n; i++) cout << a[i] << '\n';
    return 0;
}