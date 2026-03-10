#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n, m, l;
    cin >> n >> m >> l;
    vector<int> a(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    int yu = l - a[n];
    //cout << yu << ' ';
    vector<int> b;
    for (int i = 1; i <= n; i++) {
        if (i == 1) b.push_back(a[i]);
        else b.push_back({a[i] - a[i - 1]});
    }

    // for (int x : b) cout << x << ' ';
    // cout << '\n';
    
    vector<int> c(n, 0);
    c[n - 1] = min(m, 2);
    for (int i = n - 2; i >= 0; i--) c[i] = min(c[i + 1] + 1, m);

    // for (int x : c) cout << x << ' ';
    // cout << '\n';

    ll sum = 0, x, y;
    for (int i = 0; i < n; i++)
    {
        sum += b[i];
        x = sum / c[i];
        y = sum % c[i];
        //cout << sum << ' ' << x << ' ' << y << '\n';
        sum -= x;
        if (y) sum--;
    }

    ll ans = sum + yu;
    cout << ans << '\n';
    //cout << '\n';
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        ac();
    return 0;
}