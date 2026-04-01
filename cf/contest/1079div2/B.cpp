#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n; cin >> n;
    vector<int> p(n), a(n), idx(n+1);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        idx[p[i]] = i;
    }

    for (int i = 0; i < n; i++) cin >> a[i];
    
    bool gg = 1;
    for (int i = 0; i < n-1; i++) {
        if (a[i] != a[i+1]) {
            if (idx[a[i]] > idx[a[i+1]]) {
                gg = 0;
                break;
            }
        }
    }

    if (gg) cout << "YES\n";
    else cout << "NO\n";
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t = 1; cin >> t;
    while (t--) ac();
    return 0;
}