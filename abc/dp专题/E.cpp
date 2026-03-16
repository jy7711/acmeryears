#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// 问题陈述
// 有N个项目，编号为1、2，...，N。对于每个i（1≤i≤N），项目i的权重为w
// Taro决定从N件物品中挑选一些，然后把它们放在背包里带回家。背包的容量是W，这意味着所取物品的重量总和必须最多为W。
// 找出Taro带回家的物品价值的最大可能总和。
//和上一题的区别是w变得很大不能再用两遍循环滚，wa了一遍，看题解发现可以用两遍循环滚v
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    ll n, c; cin >> n >> c;
    vector<ll> dp(1e5+7, 1e18);
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        ll w, v; cin >> w >> v;
        for (int j = 1e5; j >= v; j--) dp[j] = min(dp[j], dp[j-v]+w);
    }
    ll ans = 0;
    for (int i = 0; i <= 1e5; i++) {
        if (dp[i] <= c) ans = i;
    }
    cout << ans << '\n';
    
    return 0;
}