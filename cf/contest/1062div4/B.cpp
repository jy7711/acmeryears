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
        string s, ss; cin >> s >> ss;
        map<char,int> mp1, mp2;
        for (int i = 0; i < s.size(); i++) {
            mp1[s[i]]++;
            mp2[ss[i]]++;
        }
        bool j = 0;
        for (auto &ele : mp1) {
            if (ele.second != mp2[ele.first]) {j = 1; break;}
        }
        if (j) cout << "NO\n";
        else cout << "YES\n";
    }
    
    return 0;
}