#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// 问题陈述
// 有N个项目，编号为1、2，...，N。对于每个i（1≤i≤N），项目i的权重为w
// Taro决定从N件物品中挑选一些，然后把它们放在背包里带回家。背包的容量是W，这意味着所取物品的重量总和必须最多为W。
// 找出Taro带回家的物品价值的最大可能总和。
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    ll n, c; cin >> n >> c;
    vector<ll> dp(c+7, 0);
    for (int i = 1; i <= n; i++) {
        ll w, v; cin >> w >> v;
        for (int j = c; j >= w; j--) dp[j] = max(dp[j], dp[j-w]+v);
    }
    cout << dp[c] << '\n';
    return 0;
}