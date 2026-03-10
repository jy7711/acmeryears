#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 7;
vector<int> b[N];
void ac()
{
    int n; cin >> n;
    vector<int> a(n+1,0), dp(n+1,0);
    for (int i = 1; i <= n; i++) cin >> a[i], b[i].clear();
    for (int i = 1; i <= n; i++) {
        b[a[i]].push_back(i);
        dp[i] = dp[i-1];
        if (b[a[i]].size() >= a[i]) {
            int x = b[a[i]][b[a[i]].size()-a[i]] - 1;
            dp[i] = max(dp[i], dp[x] + a[i]);
        }
    }
    cout << dp[n] << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while (t--) ac();
    return 0;
}