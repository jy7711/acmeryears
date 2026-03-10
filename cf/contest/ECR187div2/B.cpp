#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void solve() 
{
    priority_queue<pair<int,int>> q;
    string s; cin >> s;
    ll sum = 0, ans = 0;
    for (int i = 0; i < s.size(); i++) {
        sum += s[i]-'0';
        q.push({s[i]-'0',i});
    }
    while (!q.empty() && sum > 9) {
        auto [x, i] = q.top();
        q.pop();
        if (i != 0) {
            s[i] = '0';
            sum -= x;
        } 
        else {
            if (x > 1) {
                sum -= x-1;
                s[i] = '1';
            }
        }
        ans++;
    }
    cout << ans << '\n';
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}