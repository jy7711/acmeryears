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
        vector<int> a(s.size(),0);
        int cnt = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'u') a[i] = 1;
        }
        if (a[0] == 1) cnt++,a[0] = 0;
        if (a[s.size()-1] == 1) cnt++, a[s.size()-1] = 0;
        for (int i = 1; i < s.size()-1; i++) {
            if (a[i] == 1) {
                if (a[i+1] == 1) a[i+1] = 0, cnt++;
            }
        } 
        cout << cnt << '\n';
    }
    return 0;
}