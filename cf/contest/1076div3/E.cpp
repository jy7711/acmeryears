#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n; cin >> n;
    vector<int> a(n), b(n+1,0), ans(n+1,1e9+7);
    for (int i = 0; i < n; i++) cin >> a[i], b[a[i]] = 1;
    ans[1] = 0;
    for (int i = 2; i <= n; i++) {
        if (!b[i]) continue;
        for (int j = 1; i*j <= n; j++) ans[i*j] = min(ans[i*j], ans[j]+1);    
    }
    if (b[1]) cout << "1 ";
    else cout << "-1 ";
    for (int i = 2; i <= n; i++) {
        if (ans[i] != 1e9+7) cout << ans[i] << ' ';
        else cout << "-1 ";
    }
    cout << '\n';
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