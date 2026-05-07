#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int n, m; cin >> n >> m;
    vector<int> ans(m+1, 0);
    for (int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        ans[x]--;
        ans[y]++;
    }
    for (int i = 1; i <= m; i++) cout << ans[i] << '\n';
    return 0;
}