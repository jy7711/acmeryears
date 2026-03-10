#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int n; cin >> n;
    vector<int> a(n+1), dp(n+1, 0);
    map<int,int> mp;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        mp[a[i]]=max(mp[a[i]-1]+1,mp[a[i]]);
        dp[i]=max(dp[i-1],mp[a[i]]);
    }
    cout<<dp[n]<<endl;
    return 0;
}