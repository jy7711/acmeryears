#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int n, m; cin >> n >> m; 
    int a[107][107], b[107];
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
        for (int j = 1; j <= b[i]; j++) cin >> a[i][j];
    }
    vector<bool> vis(107,1);
    for (int i = 1; i <= n; i++) {
        bool gg = 1;
        for (int j = 1; j <= b[i]; j++) {
            if (vis[a[i][j]]) {
                vis[a[i][j]] = 0;
                cout << a[i][j] << '\n';
                gg = 0; 
                break;
            }
        }
        if (gg) cout << "0\n";
    }
    return 0;
}