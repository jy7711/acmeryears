#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    ll n; cin >> n;
    ll nn = 1e18;
    vector<int> a(n);
    ll sum = 0;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());
    //for (int i : a) cout << i << '\n';
    //cout << '\n'; 
    if (a.size() == 1) cout << a[0] << '\n';
    else {
        auto s = lower_bound(a.begin(),a.end(),a.size());
        if (s == a.end()) cout << a.size() << '\n';
        else cout << *s << '\n'; 
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) ac();
    return 0;
}