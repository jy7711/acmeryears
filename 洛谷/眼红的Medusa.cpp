#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n,m,x; cin >> n >> m;
    vector<int> a(n);
    map<int,int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (int i = 0; i < m; i++) {
        cin >> x;
        mp[x]++;
    }
    for (int i = 0; i < n; i++) {
        if (mp[a[i]] == 2) cout << a[i] << ' ';
    }
    return 0;
}