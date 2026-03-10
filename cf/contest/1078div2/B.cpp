#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    ll n, x, y; cin >> n >> x >> y;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    ll ans = 0, sum = 0, an = 0, mx = -1, mm = -1;
    for (int i = 0; i < n; i++) {
        //if (mx < a[i]%x) mx = a[i]%x, mm = i;
        sum += a[i]/x;
        ans = max(ans,a[i]-a[i]/x*y);
    }
    cout << y*sum + ans << '\n';
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