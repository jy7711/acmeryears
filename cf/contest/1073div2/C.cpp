#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n;; cin >> n;
    string s; cin >> s; 
    int cnt = 0;
    vector<int> ans;
    for (int i = 0; i < n; i++) 
        if (s[i] == '0') cnt++;
    for (int i = 0; i < cnt; i++) {
        if (s[i] == '1') ans.push_back(i+1);
    }
    for (int i = cnt; i < n; i++) {
        if (s[i] == '0') ans.push_back(i+1);
    }
    if (ans.empty()) cout << "Bob\n";
    else {
        cout << "Alice\n";
        cout << ans.size() << '\n';
        for (int x : ans) cout << x << ' ';
        cout << '\n';
    }
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while (t--) ac();
    return 0;
}