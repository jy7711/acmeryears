#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    ll n, m; cin >> n >> m;
    vector<vector<int>> a(n+1, vector<int> (m+1,0));
    ll cnt = 0, c = 0, c1 = 0, c2 = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            cnt += a[i][j];
        }
    }
    ll mi = 0, mj = 0;
    int i = 1, j = 1;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            c += a[j][i];
            if (c >= cnt/2) {
                mi = i; mj = j;
                break;
            }
        }
        if (c >= cnt/2) {
            mi = i; mj = j;
            break;
        }
        c1 = c;
    }
    ll ans = cnt/2*(cnt+1)/2;
    string s; 
    for (int i = 1; i < mi; i++) s += 'R';
    for (int i = n; i > 0; i--) {
        c1 += a[i][mj];
        if (c1 >= cnt/2) {
            for (int j = 1; j < i; j++) s += 'D';
            break;
        }
    }
    s += 'R';
    c1 = 0, c2 = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'D') c1++;
        else c2++;
    }
    while (c1 < n) s += 'D';
    while (c2 < n) s += 'R';
    cout << ans << '\n' << s << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    while (t--) ac(); 
    return 0; 
}