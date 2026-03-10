#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n; cin >> n; 
    string s; cin >> s;
    int ans = 1;
    for (int i = 0; i < n; i++) {
        string ss = "";
        for (int j = i; j < n; j++) ss += s[j];
        for (int j = 0; j < i; j++) ss += s[j];
        int cnt = 1;
        for (int j = 1; j < n; j++) {
            if (ss[j] != ss[j-1]) cnt++;
        } 
        ans = max(ans,cnt);
    }
    cout << ans << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    while (t--) ac();
    return 0;
}