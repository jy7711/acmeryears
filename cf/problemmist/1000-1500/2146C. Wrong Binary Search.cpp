#include <bits/stdc++.h>
using namespace std;
int t, n;
string s;
bool gg = 1;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cin >> t;
    while (t--) {
        gg = 1;
        cin >> n >> s; s = '1' + s + '1';
        vector<int> ans(n+1,0);
        vector<pair<int,int>> an;
        for (int i = 1; i <= n; i++) ans[i] = i;
        if (s.find("101") != -1) {cout << "NO\n"; continue;};
        cout << "YES\n";
        int l = 1, r = 1, len = 0;
        for (; r <= n; r++) {
            if (s[r] == '0') len++;
            if (s[r] == '1' && len != 0) {
                an.push_back({l,r-1}); l = r+1;
                len = 0;
            }
            else if (s[r] == '1' && len == 0) l++;  
        }
        if (l < r) an.push_back({l,r-1});
        for (int i = 0; i < an.size(); i++) {
            int cc = 0;
            for (int j = an[i].first; j <= an[i].second; j++) {
                ans[j] = an[i].second-cc;
                cc++;
            }
        }
        //for (auto &ele : an) cout << ele.first << ' ' << ele.second << '\n';
        for (int i = 1; i <= n; i++) cout << ans[i] << ' ';
        cout << '\n';
    }   
    return 0;
}