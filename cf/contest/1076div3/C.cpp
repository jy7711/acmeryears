#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n, q; cin >> n >> q;
    vector<int> a(n+1,0), b(n+2,0), c(n+1, 0);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
    for (int i = n; i >= 1; i--) b[i] = max({b[i+1],b[i], a[i]});
    for (int i = 1; i <= n; i++) c[i] = c[i-1] + b[i];
    while (q--) {
        int l, r; cin >> l >> r;
        cout << c[r] - c[l-1] << ' ';
    }  
    cout << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while (t--) ac();
    return 0;
}