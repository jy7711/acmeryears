#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool vis[700];
vector<string> s(700, "");
ll cnt;
void ac()
{
    memset(vis, 0, sizeof(vis));
    int n, ans = -1; cin >> n;
    for (int i = 1; i <= n; i++) cin >> s[i];
    for (int i = 1; i <= n; i++) {
        for (int j = i+1; j <= n; j++) {
            if (!vis[j]) {
                if (s[j].find(s[i]) == -1) {
                    vis[j] = 1;
                    ans = max(ans, j); 
                }
                else break;
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
    int t; cin >> t;
    while (t--) ac();
    return 0;
}