#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n, m; cin >> n >> m;
    vector<ll> a(n); map<int,int> mp; 
    ll sum = 0;
    for (int i = 0; i < n; i++) cin >> a[i],mp[a[i]] = i+1, sum += a[i];
    sort(a.begin(),a.end());
    if (m > n/2 || (sum-a[n-1]<a[n-1] && m == 0)) {
        cout << "-1\n";
        return;
    }
    if (m == 0) {
        cout << n-1 << '\n';
        int j = n-2; ll an = a[n-1]; int x = -1, y = -1;
        for (; j >= 0; j--) {
            if (an - a[j] > 0) {an -= a[j]; cout << mp[a[j]] << ' ' << mp[a[n-1]] << '\n';}
            else {x = mp[a[n-1]], y = mp[a[j]]; an -= a[j]; break;}
        } 
        for (int i = 0; i < j; i++) {
            cout << mp[a[i+1]] << ' ' << mp[a[i]] << '\n';
        }
        cout << x << ' ' << y << '\n';
    }
    else {
        cout << n-m << '\n';
        for (int i = 0; i < n-m; i++) {
            cout << mp[a[i+m]] << ' ' << mp[a[i]] << '\n';
        }
    }
    return;
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