#include <bits/stdc++.h>
using namespace std;
#define int long long
int tzs(vector<int> c)
{
    if (c.size() == 0) return 0;
    int z = c.size()/2;
    int ans = 0;
    for (int i = 0; i < c.size(); i++) {
        ans += abs(c[z]-c[i])-abs(z-i); 
    }
    return ans;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; string s;
        cin >> n >> s;
        vector<int> a, b;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a') a.push_back(i);
            else b.push_back(i);
        }
        cout << min(tzs(a),tzs(b)) << '\n';
    }
}