#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int ans = 0, cnt = 0;
    bool gg = 0;
    for (int i = 0; i < n; i++) {
        if (gg) cnt++;
        if (s[i] == '0') {
            if (!gg) ans++;
        } 
        else gg = 1, cnt = 0;
        if (cnt == k) gg = 0, cnt = 0; 
        //cout << i << ' ' << gg  << ' ' << cnt << ' '<< '\n';
    }
    cout << ans << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) ac();
    return 0;
}