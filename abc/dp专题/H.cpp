#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9+7;
int h,w;
vector<vector<char>> a;
vector<vector<ll>> dp;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    cin >> h >> w;
    a.resize(h+1, vector<char> (w+1, '.'));
    dp.resize(h+1, vector<ll> (w+1, 0));
    dp[0][1] = 1;
    for (int i = 1; i <= h; i++) 
        for (int j = 1; j <= w; j++)
            cin >> a[i][j];
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            if (a[i][j] == '#') continue;
            dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % mod;
        }
    }
    cout << dp[h][w] << '\n';
    return 0;
}