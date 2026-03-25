#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int dp[77][1007];
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int n, l, r; cin >> n >> l >> r;
    vector<int> a(n+1, 0);
    for (int i = 1; i <= n; i++) cin >> a[i];
    dp[0][l] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = r; j >= 0; j--) {
            if (j - a[i] >= 0) dp[i][j] = dp[i][j] || dp[i-1][j-a[i]]; 
            if (j + a[i] <= r) dp[i][j] = dp[i][j] || dp[i-1][j+a[i]];
        }
    }
    for (int i = r; i >= 0; i--) {
        if (dp[n][i]) {
            cout << i << '\n';
            return 0;
        }
    }
    cout << "-1\n";
    return 0;
}