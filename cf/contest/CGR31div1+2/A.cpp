#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int l, a, b; cin >> l >> a >> b;
    int ans = a, now = b;
    for (int i = 0; i < 5000; i++) {
        ans = max(ans, (a+b*i)%l);
    }
    cout << ans << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t = 1; cin >> t;
    while (t--) ac();
}