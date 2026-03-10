#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    //这题仍存有疑问，为什么只要考虑ans1和ans2，然后后面的都可以递推出来
    //然后这题就这么随意的ac了...想不明白....
    //1400 模拟 贪心 数学 
    //题目链接：https://codeforces.com/contest/2151/problem/C
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<ll> a(n*2+1), ans(n+2);
        for (int i = 1; i <= 2*n; i++) cin >> a[i];
        for (int i = 1; i <= 2*n; i++) {
            if (i & 1) ans[1] -= a[i], ans[2] += a[i];
            else ans[1] += a[i], ans[2] -= a[i]; 
        }
        ans[2] += a[2*n]*2 - a[1]*2;
        for (int i = 3; i <= n; i++) {
            ans[i] = ans[i-2] - a[i-1]*2 + a[n*2-i+2]*2;
        }
        for (int i = 1; i <= n; i++) cout << ans[i] << ' ';
        cout << '\n';
    }
    return 0;
}