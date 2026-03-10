#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n;; cin >> n;
    vector<int> a(n);
    map<int,int> mp;
    for (int i = 0; i < n; i++) cin >> a[i], mp[a[i]]++; 
    if (!mp[0] || (mp[0] > 1 && !mp[1])) cout << "NO\n";
    else cout << "YES\n";
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