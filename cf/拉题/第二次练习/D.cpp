#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 7;
void ac()
{
    string s, ss; cin >> s >> ss;
    bool gg = 0;
    int cnt = 0;
    int ans = s.size() + ss.size();
    for (int i = 0; i < min(s.size(),ss.size()); i++) {
        if (!gg && s[i] == ss[i]) cnt++;
        else gg = 1;  
    }

    if (cnt) ans -= cnt-1;

    cout << ans << '\n';

    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    int t; cin >> t; 
    while (t--) ac();

    return 0;
}