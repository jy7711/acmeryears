#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    ll n; cin >> n;
    vector<vector<ll>> a(3, vector<ll> (n+7,0));
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= n; j++) cin >> a[i][j];
    }
    vector<vector<pair<ll,ll>>> dp(4, vector<pair<ll,ll>> (n+7,{0,0}));
    
    //计算第一行从前往后的区间
    dp[1][1] = {a[1][1],a[1][1]};
    for (int i = 2; i <= n; i++) {
        dp[1][i] = {min(dp[1][i-1].first,a[1][i]),max(dp[1][i-1].second,a[1][i])};
        //cout << dp[1][i].first << ',' << dp[1][i].second << ' ';  
    }
    //计算第二行从后往前的区间
    dp[2][n] = {a[2][n],a[2][n]};
    for (int i = n-1; i >= 1; i--) {
        dp[2][i] = {min(dp[2][i+1].first,a[2][i]),max(dp[2][i+1].second,a[2][i])};
    }
    //cout << '\n';
    //第一行的区间和第二行的区间合并, 并求最短的区间长度
    //不对，我们不能保证较短的区间其两段长度的乘积就较大，所以应该从所有可能的区间中直接求最大值
    //为啥还不对
    //不是乘的原因是会漏算区间， 即存在最长区间内的合法左右端点值满足条件
    //好像不是乘......qwqcao找不到修猫了
    //找到了hhh
    /*
    *    /\_/\
    *   (= ._.)
    *   / >  \>
    */
    ll ans = 0; vector<ll> an(n*2+1,0);
    for (int i = 1; i <= n; i++) {
        dp[3][i] = {min(dp[1][i].first,dp[2][i].first),max(dp[1][i].second,dp[2][i].second)};
    //——————————————————————————————————————————————————————————————————————————————————————
        //到这都是对的，下面的删了改了,从我们算出的dp[3][i]中找到每个first对应的最大second，用数组记录
        //然后计算每个r对应的最大l， 从1 - l的范围即为这个r的答案
        //byd一点双指针不会，找块豆腐撞死算了
        an[dp[3][i].second] = max(an[dp[3][i].second], dp[3][i].first);
    }
    //计算加和的结果
    for (int i = 1; i <= n*2; i++) {
        //因为有些数没有统计但它的右区间是一定比前一个大的
        //就比如说 1-5 2-0， 那么这个2起码也是5对不对
        //等等真的是这样吗
        //byd你还真不会
        an[i] = max(an[i],an[i-1]);
        //这是在模拟双指针， 即满足条件的最小左区间值
        ans += an[i];
    }
    //从出思路到ac我仅仅用了2.5h,自己试试看吧qwq
    /*
    *    /\_/\
    *   (= ._.)
    *   / >  \>
    */
    cout << ans << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) ac();
    return 0;
}