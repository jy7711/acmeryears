#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;

    while (t--) {
        int n; ll k;
        cin >> n >> k;
        int ans = 0;
        vector<ll> q(n), r(n);
        multiset<ll> a;

        for (int i = 0; i < n; i++) cin >> q[i];
        for (int i = 0; i < n; i++) cin >> r[i];

        sort(q.begin(),q.end(),greater<>());
        
        for (int i = 0; i < n; i++) a.insert(r[i]);
        
        for (int i = 0; i < n; i++) {
        
            ll x = (k-q[i])/(q[i]+1);
            auto cc = a.upper_bound(x);
        
            if (cc != a.begin()) {
                cc--;
                ans++;
                a.erase(cc);
            }
            
        } 
        cout << ans << '\n';
    }
    return 0;
}