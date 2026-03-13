#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<int> ans(3e5+7,0);
void ac()
{
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i], ans[a[i]]++;
    sort(a.begin(),a.end(),greater<>());
    for (int i = 3e5; i >= 1; i--) ans[i] += ans[i+1];
    // for (int i = n+1; i >= 1; i--) cout << ans[i];
    // cout << '\n';
    for (int i = 1; i < 3e5+5; i++) {
        if (ans[i] > 9) ans[i+1] += ans[i]/10, ans[i]%=10; 
    }
    bool gg = 0;
    for (int i = 3e5+5; i >= 1; i--) {
        if (ans[i]) gg = 1;
        if (gg) cout << ans[i];
    }
    cout << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t = 1; //cin >> t;
    while (t--) ac();
}
