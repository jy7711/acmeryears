#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<ll> a(5000, 0);
void ac()
{
    ll n; cin >> n; ll m1 = 1e18, m2 = -1e18;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        int c1 = 0, c2 = 0;
        for (int j = i+1; j <= n; j++) {
            if (abs(a[i]-m1) > abs(a[j]-m1)) c1++;
            if (abs(a[i]-m2) > abs(a[j]-m2)) c2++;
        }
        cout << max(c1,c2) << ' ';
    }
    cout << '\n';
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