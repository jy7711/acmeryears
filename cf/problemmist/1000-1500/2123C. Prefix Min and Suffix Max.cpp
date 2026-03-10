#include <bits/stdc++.h>
using namespace std;
void ac()
{
    int n; cin >> n;
    int mn = 1e7, mx = -1;
    vector<int> a(n),b,c;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        mn = min(a[i],mn);
        b.push_back(mn);
    }
    for (int i = n-1; i >= 0; i--) {
        mx = max(a[i],mx);
        c.push_back(mx);
    }
    reverse(c.begin(),c.end());
    for (int i = 0; i < n; i++) {
        if (a[i] == b[i] || a[i] == c[i]) cout << 1;
        else cout << 0;
    }
    cout << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        ac();
    }
    return 0;
}