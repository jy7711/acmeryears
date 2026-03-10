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
        vector<int> a(n+1), b, c;
        map<int,int> mp;
        int cnt = 0, cnt0 = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];  
            if (a[i] == 0) { cnt0++; c.push_back(i); }
            mp[a[i]]++;
        }
        if (cnt0 == 1) {
            for (int i = 1; i <= n; i++) {
                if (mp[i] == 0) a[c[0]] = i;
            }
        }
        for (int i = 1; i <= n; i++) {
            if (a[i] != i) b.push_back(i);  
        }
        if (b.size() == 0) cout << 0 << '\n';
        else cout << b[b.size()-1] - b[0] + 1 << '\n';
    }
    return 0;
}