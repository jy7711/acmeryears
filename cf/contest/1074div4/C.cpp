#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac() 
{
    int n; cin >> n;
    vector<int> a(n);
    map<int,int> mp;
    for (int i = 0; i < n; i++) cin >> a[i], mp[a[i]]++;
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());
    int ans = 0, cnt = 1;
    for (int i = 0; i < a.size(); i++) {
        if (i == 0) continue;
        if (a[i] - a[i-1] == 1) cnt++;
        else ans = max(ans,cnt), cnt = 1;
    }
    ans = max(ans,cnt);
    cout << ans << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t = 1; cin >> t;
    while (t--) {
        ac();
    }
    return 0;
}