#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e4 + 7;
int a[N], vis[N], used[N];
vector<int> v;
ll cnt, ans;
void ac()
{
    //n只青蛙步长为a[i],初始位置0, 有m块石头围成0 -- m-1的环
    //问所有可以到达石头的编号之和
    
    //等差数列求和，vis固定为1， used记录所有因子当前的值，
    //等差数列计算从当前位置到最大位置的等差和，枚举后面所有可能情况加上used
    //m的范围到1e9, 因子列最长不会超过1e4， 用于优化枚举
    memset(used, 0, sizeof(a));
    memset(vis, 0, sizeof(vis));
    v.clear(); ans = 0;
    ll n, m; cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i*i <= m; i++) {
        if (m%i == 0) {
            v.push_back(i);
            if (m%(m/i) == 0) v.push_back(m/i); 
        }
    }
    sort(v.begin(),v.end());

    for (int i = 1; i <= n; i++) {
        ll x = gcd(a[i], m);
        for (int j = 0; j < v.size()-1; j++) 
            if (v[j]%x == 0) vis[j] = 1;
    }

    for (int i = 0; i < v.size()-1; i++) {
        if (vis[i] != used[i]) {
            // (首项+尾项)*项数/2
            ll sum = (v[i] + m-1-(m-1)%v[i]) * ((m-1-(m-1)%v[i]-v[i])/v[i]+1) /2;
            ans += (vis[i]-used[i]) * sum; 
        }
        for (int j = i+1; j < v.size()-1; j++) {
            if (v[j]%v[i] == 0) {
                used[j] += vis[i]-used[i];
            }
        }
    }
    cout << "Case #" << ++cnt << ": ";
    cout << ans << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t = 1; cin >> t;
    while (t--) ac();
    return 0;
}