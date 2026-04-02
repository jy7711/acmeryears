#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int n; cin >> n;
    string s; cin >> s;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] != 'e') continue;
        for (int j = i+1; j < n; j++) {
            if (s[j] == 'f') ans += j-i;
        }
    }
    cout << ans << '\n';
    return 0;
}