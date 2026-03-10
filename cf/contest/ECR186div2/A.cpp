#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        bool gg = 0, jj = 0;
        for (int i = 0; i < s.size()-3; i++) {
            if (s[i] == '2' && s[i+1] == '0' && s[i+2] == '2') {
                if (s[i+3] == '6') gg = 1;
                if (s[i+3] == '5') jj = 1;
            }
        }
        if (gg || !jj) cout << "0\n";
        else cout << "1\n";
    }
    return 0;
}