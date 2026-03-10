#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n; cin >> n;
    vector<ll> a(n+1,0);
    ll mn = 1e9 + 7, mm = mn;
    for (int i = 1; i <= n; i++) cin >> a[i], mn = min(a[i],mn);
    for (int i = 1; i <= n; i++) {
        if (a[i] > mn) mm = min(mm,a[i]-mn);
    }
    if (mn <= mm) cout << mm << '\n';
    else cout << mn << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t = 1; 
    cin >> t;
    while (t--) ac();
    return 0;
}