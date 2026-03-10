#include <bits/stdc++.h>
using namespace std;
#define int long long
int n,d, ans = 0;
const int N = 1e6+7;
int a[N];
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cin >> n >> d;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n);
    for (int i = 0; i < n-1; i++) {
        ans += upper_bound(a,a+n,a[i]+d)-a-i-1;
        //cout << i << ' ' << ans << '\n';
    }
    cout << ans;
    return 0;
}