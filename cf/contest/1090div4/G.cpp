#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 7;
const int mod = 676767677;
//b是坐下的时间
//cnt是当前时间坐下的人数， sit是当前位置有没有人
int b[N], tim[N], cnt[N];
void ac()
{
    memset(b, 0, sizeof(b));
    memset(cnt, 0, sizeof(cnt));
    memset(tim, 0, sizeof(tim));
    ll n, m, ans = 1; cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
        tim[b[i]]++;
    }
    
    for (int i = 1; i <= m; i++) {
        cnt[i] = tim[i-1] + cnt[i-1];
    }
    cnt[m+1] = 0;
    
    for (int i = 1; i <= n; i++) {
        if (b[i]) {
            int gg = 0, jj = 0;
            if (i > 1) {
                if (b[i-1] < b[i]) gg = 1;
                if (b[i-1] + 1 < b[i]) jj = 1;
            }
            if (i < n) {
                if (b[i+1] < b[i]) gg = 1;
                if (b[i+1] + 1 < b[i]) jj = 1;
            }
            if (!gg) {ans = 0; break;}
            else if (jj) ans = ans * tim[b[i]-1] % mod;
            else ans = ans * cnt[b[i]] % mod;
        }
    }

    cout << ans << '\n';
    // for (int i = 0; i < m; i++) cout << cnt[i] << ' ';
    // cout << '\n';
    return;
}
int main() 
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t = 1; cin >> t;
    while (t--) ac();
    return 0;
}