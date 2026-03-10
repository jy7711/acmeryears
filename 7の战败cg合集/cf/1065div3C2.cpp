#include <bits/stdc++.h>
using namespace std;
#define int long long
void ac()
{
    //一道位运算的好题，只能说第一次遇到这种写法，
    //赛时写出了简单的版本，难的版本没绕过来弯
    //题目链接：https://codeforces.com/contest/2171/problem/C2
    //a[i]>> j & 1检查当前位是否为1，知识点加一
    int n, c; cin >> n;
    bool gg = 0;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int j = 31; j >= 0; j--) {
        c = 0;
        for (int i = n-1; i >= 0; i--) {
            if (a[i]>> j & 1) c^= 1;
            if (b[i]>> j & 1) c^= 1;
        }
        if (!c) continue;
        gg = 1;
        for (int i = n-1; i >= 0; i--) {
            if ((a[i] >> j & 1) != (b[i] >> j & 1)) {
                if (i&1) cout << "Mai\n";
                else cout << "Ajisai\n";
                return;
            }
        }
    }
    if (!gg) cout << "Tie\n";
    return;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        ac();
    }
    return 0;
}