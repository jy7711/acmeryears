#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    //看题解的，正难则反，求出不能删掉的最大值，减去
    // 1600 数据结构 dp
    //题目链接：https://codeforces.com/contest/2167/problem/G
    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        ll sum = 0, mx = 0;
        vector<ll> a(n), b(n), dp(n,0);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            sum += b[i];
        }
        for (int i = 0; i < n; i++) {
            dp[i] = b[i];
            for (int j = 0; j < i; j++) {
                if (a[j] <= a[i]) dp[i] = max(dp[i],dp[j] + b[i]);
            }
            mx = max(mx,dp[i]);
        }
        cout << sum - mx << '\n';
    }
    return 0;
}                                                                                            