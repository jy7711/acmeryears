#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n; 
vector<ll> a(17, 0), b(17, 0);
ll ans = 1e18;
void dfs(int i, ll sour, ll bitter, int cnt)
{
    if (i > n) {
        if (cnt) ans = min(abs(sour-bitter), ans);
        return;
    }
    dfs(i+1,sour*a[i],bitter+b[i],cnt+1);
    dfs(i+1,sour,bitter,cnt);
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i] >> b[i];
    dfs(1,1,0,0);
    cout << ans << '\n';
    return 0;
}