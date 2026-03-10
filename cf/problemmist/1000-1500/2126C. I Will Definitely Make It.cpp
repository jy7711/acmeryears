#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n >> k;
        map<int,int> mp;
        vector<int> a(n+1), b;
        for (int i = 1; i <= n; i++) cin >> a[i];
        k = a[k];
        for (int i = 1; i <= n; i++) {
            mp[a[i]]++;
            if (a[i] > k && mp[a[i]] == 1) b.push_back(a[i]);
        } 
        int cnt = 0;
        sort(b.begin(),b.end());
        bool g = 0;
        for (int i = 0; i < b.size(); i++) {
            cnt += b[i]-k;
            if (cnt > k) {g = 1; break;}
            k = b[i];
        }
        if (g) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}