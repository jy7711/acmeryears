#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll ans = 0, an = 0;
int s[4];
vector<int> a(30, 0);
void dfs(ll h, ll l, ll r, ll stop)
{
    if (h > stop) {
        an = min(max(l,r), an);
        return;
    }
    l += a[h];
    dfs(h+1,l,r,stop);
    l -= a[h]; r += a[h];
    dfs(h+1,l,r,stop);
    r -= a[h];
    return;
}
int main()
{
    //https://www.luogu.com.cn/problem/P2392
    //这题有力气， 一眼贪心， 做完全wa
    //用01背包dp和搜索都能做
    ios::sync_with_stdio(false), cin.tie(0);
    for (int i = 0; i < 4; i++) cin >> s[i];
    for (int i = 0; i < 4; i++) {
        for (int j = 1; j <= s[i]; j++) cin >> a[j];
        an = 1e9;  
        dfs(1, 0, 0, s[i]); //记录当前深度， 左右脑互搏， 退出深度；
        ans += an;
    }
    cout << ans << '\n';
    return 0;
}