#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n; cin >> n;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    int ans = 0;

    for (int i = 1; i <= n; i++) 
        if (i >= a[i]) ans++;
    
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