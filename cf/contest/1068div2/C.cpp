#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 7;
void ac()
{
    ll n, k; cin >> n >> k;
    set<ll> s;
    for (int i = 0; i < n; i++) {
        ll x; cin >> x;
        s.insert(x);
    }
    
    auto t = s;
    vector<ll> ans;
    while (s.size()) {
        ll x = *s.begin();
        for (int i = x; i <= k; i+= x) {
            if (t.find(i) == t.end()) {
                cout << "-1\n"; 
                return;
            }
            s.erase(i);
        }
        ans.push_back(x);
    }
    cout << ans.size() << '\n';
    for (ll x : ans) cout << x << ' ';
    cout << '\n';
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