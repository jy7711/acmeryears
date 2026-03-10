#include <bits/stdc++.h>
using namespace std;
#define int long long
void ac() 
{
    string s; cin >> s;
    bool gg = 0;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] == '>') gg = 1;
        if (gg) if (s[i] == '<') {cout << "-1\n"; return;}
    }
    for (int i = 0; i < n-1; i++) {
        if ((s[i] == '*' && (s[i+1] == '<' || s[i+1] == '*')) || (s[i] == '>' && s[i+1] == '*'))
            { cout << "-1\n"; return; }
    }
    int l = 0, r = n-1;
    for (int i = 0; i < n; i++) {
        if (s[i]!='>') l++;
    }
    for (int i = n-1; i >= 0; i--) {
        if (s[i]!='<') r--;
    }
    cout << max(l,n-1-r) << '\n';
    return ;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        ac();
    }
    return 0;
}