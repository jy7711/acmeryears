#include <bits/stdc++.h>
using namespace std;
using ll = long long;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        vector<ll> a(n), b(n+7,0), c;
        ll mxj = -1, cnt1 = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i]%2 == 1) mxj = max(a[i],mxj), cnt1++;
        }
        for (int i = 0; i < n; i++) {
            if (a[i]%2 == 0) c.push_back(a[i]);
        }
        if (cnt1) {
            b[1] = mxj; 
            if (!c.empty()) sort(c.begin(),c.end(),greater<>());
            // for (int i = 0; i < c.size(); i++) cout << c[i] << ' ';
            // cout << '\n';
            int j = 0;
            for (int i = 2; i <= n; i++) {
                if (j < c.size()) b[i] = b[i-1] + c[j], j++;
                else {
                    if (cnt1 > 2) b[i] = b[i-2];
                    else b[i] = 0;
                }  
            }
            if (cnt1%2 == 0) b[n] = 0;
            for (int i = 1; i <= n; i++) cout << b[i] << ' ';
        }
        else {
            for (int i = 1; i <= n; i++) cout << "0 ";
        }
        
        cout << '\n';
    }
    return 0;
}                                                                                            