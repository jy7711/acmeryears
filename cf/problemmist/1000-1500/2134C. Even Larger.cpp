#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<ll> a, b;
        ll cnt = 0;
        for (int i = 1; i <= n; i++) {
            int x; cin >> x;
            if (i%2 == 1) a.push_back(x);
            else b.push_back(x);
        }
        if (n%2 == 0) a.push_back(0);
        for (int i = 0; i < b.size(); i++) {
            if (b[i] < a[i] + a[i+1]) {
                cnt += a[i] + a[i+1] - b[i];
                 a[i+1] -= a[i] + a[i+1] - b[i];
            }
            if (a[i+1] < 0) a[i+1] = 0;
        }
        cout << cnt << '\n';
    } 
    return 0;
}