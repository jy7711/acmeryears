#include <bits/stdc++.h>
using namespace std;
using ll = long long;
/*
问题陈述
Taro的暑假明天开始，他决定现在就制定计划。
假期由N天组成。对于每个i（1≤i≤N），Taro将选择以下活动之一，并在第i天进行：
A：在海里游泳。获得a快乐点。
B：在山上抓虫子。获得b快乐点.
C：在家做作业。获得c快乐点。
由于Taro很容易感到无聊，他不能连续两天或两天以上做同样的活动。
找到Taro获得的最大可能的幸福总分。
*/
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    ll n; cin >> n;
    vector<vector<ll>> dp(n+7, vector<ll> (5, 0));
    vector<ll> a(n+1, 0), b(n+1, 0), c(n+1, 0);
    for (int i = 1; i <= n; i++) cin >> a[i] >> b[i] >> c[i];
    dp[1][1] = a[1], dp[1][2] = b[1], dp[1][3] = c[1];
    for (int i = 2; i <= n; i++) {
        dp[i][1] = max(dp[i-1][2],dp[i-1][3]) + a[i];
        dp[i][2] = max(dp[i-1][1],dp[i-1][3]) + b[i];
        dp[i][3] = max(dp[i-1][1],dp[i-1][2]) + c[i];
    }
    cout << max({dp[n][1], dp[n][2], dp[n][3]}) << '\n';
    return 0;
}