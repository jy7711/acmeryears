#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        vector<int> a(n);
        ll sum = 0; ll cnt = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            if (a[i] == 0) cnt++;
        }
        cout << min(sum-n+1ll,n-cnt) << '\n';
    }
    return 0;
}