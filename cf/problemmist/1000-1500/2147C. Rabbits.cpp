#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; string s;
        cin >> n >> s;
        bool gg = 0, jj = 0; int cnt = 0;
        jj = (s[0] == '1'); 
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') cnt++;
            if (i == 0) continue;
            if (s[i] == '0' && s[i-1] == '0') jj = 0;
            if (s[i] == '1' && s[i-1] == '1') {
                if (jj && cnt & 1) gg = 1;
                jj = 1;
                cnt = 0;
            }
        }
        if (jj && cnt & 1 && s[n-1] == '1') gg = 1;
        if (gg) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}