#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll cal(ll l, ll r) 
{
    return (r-l)*(r-l+1)/2;
}
void ac()
{
    int n; cin >> n; 
    vector<int> a(n);
    vector<vector<int>> b(n+1);
    set<pair<int,int>> s;
    s.insert({1,n});
    ll ans = cal(1,n);

    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 1; i < n; i++) {
        b[abs(a[i]-a[i-1])].push_back(i+1);
    }

    for (int i = 1; i < n; i++) {   
        cout << ans << ' ';
        for (int x : b[i]) {
            auto it = s.lower_bound({x,x});
            it--;
            auto [l, r] = *it;
            s.erase(it);

            ans -= cal(l,r);
            ans += cal(l,x-1);
            ans += cal(x,r);
            
            s.insert({l,x-1});
            s.insert({x,r});
        }
    }
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