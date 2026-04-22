#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 7;
bool vis[3][N];
char a[3][N];
vector<ll> dp(N);
void ac()
{
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[1][i];
    for (int i = 1; i <= n; i++) cin >> a[2][i], dp[i] = 1e18;

    dp[0] = 0; a[1][0] = a[2][0] = 'c';
    for (int i = 1; i <= n; i++) {
        if (a[1][i] == a[2][i]) {
            dp[i] = min(dp[i], dp[i-1]);
        }
        else {
            if (a[1][i] == a[1][i-1] && a[2][i] == a[2][i-1]) {
                if (i > 1) dp[i] = min(dp[i-2], dp[i]);
                else dp[i] = 0; 
            }
            //cout << dp[i-1]+1 << ',' << dp[i];
            dp[i] = min(dp[i-1] + 1, dp[i]);
        }
        // cout << dp[i] << ' ';
        // cout << a[1][i] << a[2][i] << ' ';
    }
    //cout << '\n';
    cout << dp[n] << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t = 1; cin >> t;
    while (t--) ac();
    return 0;
}