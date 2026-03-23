#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll n, m, p, q;
const int mod = 998244353;
//ll dp[507][507][100007];
//一开始想这么开数组， 发现好像会爆
void ac() {
    cin >> n >> m >> p >> q;
    vector<vector<int>> a(n+1, vector<int>(m+1, 0));
    vector<vector<vector<int>>> dp(2, vector<vector<int>>(m+7, vector<int>(n+m+7, 0)));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    ll now = 1, ans = 0;
    dp[1][1][0] = 1;                
    //调的好恶心不想做第二遍
    //用滚动数组存这一次和上一次的，只用开2，节省空间
    for (int i = 1; i <= n; i++) {
        now ^= 1;
        for (int j = 1; j <= m; j++) {
            if (a[i][j]) dp[now][j][0] = 0; 
            else dp[now][j][0] = (dp[1-now][j][0] + dp[now][j-1][0]) % mod;
            //cout << "i,j : " << i << " " << j << " : ";
            //cout << dp[now][j][0] << ' ';
            for (int k = 1; k < i + j; k++) {
                if (a[i][j]) dp[now][j][k] = (dp[1-now][j][k-1] + dp[now][j-1][k-1]) % mod;
                else dp[now][j][k] = (dp[1-now][j][k] + dp[now][j-1][k]) % mod;
                //cout << dp[now][j][k] << ' ';
            }
            //cout << '\n';
        }
    }

    for (int k = 0; k <= n + m; k++) {
        if (k >= q && n + m - k > p) {
            ans = (ans + dp[now][m][k]) % mod;
        }
    }
    cout << ans << '\n';
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t = 1; //cin >> t;
    while (t--) ac();
    return 0;
}