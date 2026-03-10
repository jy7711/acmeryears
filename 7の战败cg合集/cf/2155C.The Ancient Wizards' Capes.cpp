#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 676767677;
int main()
{
    //1500糕手，看题解艰难战胜
    //古老巫师的隐形斗篷 
    //1500 暴力 贪心 模拟
    //题目链接：https://codeforces.com/contest/2155/problem/C
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int ans = 2;
        vector<int> a(n+1), b(n+2,0), c(n+2,0), d(n+2,0);
        for (int i = 1; i <= n; i++) cin >> a[i];
        bool gg = 0, jj = 0; b[1] = 0;
        for (int i = 2; i <= n; i++) {
            if (a[i] - a[i-1] == 0) b[i] = 1-b[i-1];
            else if (abs(a[i] - a[i-1]) == 1) b[i] = b[i-1];
            else  {gg = 1; break;}
        }
        if (gg) {cout << 0 << '\n'; continue;}
        c[1] = b[1]; d[n] = b[n];
        for (int i = 2; i <= n; i++) c[i] = b[i] + c[i-1];
        for (int i = n-1; i >= 1; i--) d[i] = b[i] + d[i+1];
        for (int i = 1; i <= n; i++) {
            if (i-c[i-1]+d[i+1]!=a[i]) jj = 1;
            if (jj) break;
        }
        if (jj) ans--;
        jj = 0, gg = 0; b[1] = 1; 
        for (int i = 2; i <= n; i++) {
            if (a[i] - a[i-1] == 0) b[i] = 1-b[i-1];
            else if (abs(a[i] - a[i-1]) == 1) b[i] = b[i-1];
            else  {gg = 1; break;}
        }
        if (gg) {cout << 0 << '\n'; continue;}
        c[1] = b[1]; d[n] = b[n];
        for (int i = 2; i <= n; i++) c[i] = b[i] + c[i-1];
        for (int i = n-1; i >= 1; i--) d[i] = b[i] + d[i+1];
        for (int i = 1; i <= n; i++) {
            if (i-c[i-1]+d[i+1]!=a[i]) jj = 1;
            if (jj) break;
        }
        if (jj) ans--;
        cout << ans << '\n';
    }
    return 0;
}