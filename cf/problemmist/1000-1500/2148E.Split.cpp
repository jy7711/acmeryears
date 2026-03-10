#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n,k; cin >> n >> k;
        vector<int> a(n); map<int,int> mp,mp1;

        for (int i = 0; i < n; i++) { cin >> a[i]; mp[a[i]]++; }
        if (n%k != 0 || n < k) { cout << 0 << '\n'; continue; }
        bool j = 0;
        for (auto &ele : mp) {
            if (ele.second%k != 0) {j = 1; break;}
        }
        if (j) {cout << 0 << '\n'; continue; }

        int ans = 0; int s = 0;
        for (int i = 0; i < n; i++) {
            while (s < n) {
                int x = a[s];
                if (mp1[x]+1 <= mp[x]/k) { mp1[x]++; s++; }
                else break;
            }
            ans += s - i;
            mp1[a[i]]--;
        }
        cout<< ans << '\n'; 
    }
}