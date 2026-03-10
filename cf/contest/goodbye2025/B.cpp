#include<bits/stdc++.h>
using namespace std;
using ll = long long;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int cnt = 0, ans = 0;
        for (int i = 0; i < s.size()-1; i++) {
            if (s[i] == 'Y' && s[i+1] == "Y") cnt++;
        }
        if (cnt > 1) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}