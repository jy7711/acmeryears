#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    ll n, q; cin >> n >> q;
    vector<pair<int,int>> a(n);
    for (int i = 0; i < n; i++) cin >> a[i].first, a[i].second = i+1;
    sort(begin(a), end(a));
    
    while (q--) {
        int k; cin >> k;
        vector<int> b(k);
        for (int i = 0; i < k; i++) cin >> b[i];
        for (int i = 0; i < n; i++) {
            bool gg = 1;
            for (int j = 0; j < k; j++) {
                if (b[j] == a[i].second) gg = 0; 
            }
            if (gg) {
                cout << a[i].first << '\n';
                break;
            }
        }
    }

    return 0;
}