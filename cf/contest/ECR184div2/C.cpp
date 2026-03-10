#include<bits/stdc++.h>
using namespace std;
#define int long long
void ac()
{
    int n; cin >> n;
    vector<int> a(n+1), b(n+1);
    int sum = 0;
    for (int i = 1; i <= n; i++) cin >> a[i], sum += a[i];
    for (int i = 1; i <= n; i++) b[i] = i*2 - a[i];
    int ans = 0;int cc = 0; 
    for (int i = 1; i <= n; i++) {
        cc = max(b[i], cc + b[i]);
        ans = max(cc, ans);
    }
    cout << ans + sum << '\n';
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin>>t;
    while(t--){
        ac();
    }
}