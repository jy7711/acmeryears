#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll dp[1007][1007];
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    string a, b; cin >> a;
    b = a;  reverse(b.begin(), b.end());
    b = ' ' + b; a = ' ' + a;
    int n = a.size();
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i] == b[j]) 
                dp[i][j] = dp[i-1][j-1] + 1;
            else 
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

    cout << n - dp[n][n] << '\n';
    return 0;
}