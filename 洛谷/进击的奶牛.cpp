#include <bits/stdc++.h>
using namespace std;
int l, r, n, m, ans;
const int N = 1e5 + 7;
int a[N]; 
#define int long long
bool check(int dis) {
    int i = 1, cnt = 1, now = a[0];
    for (i = 1; i < n; i++) {
        if (a[i]-now >= dis) now = a[i], cnt++;
    } 
    if (cnt >= m) return 1;
    else return 0;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n);
    l = a[0]; r = a[n-1];
    while (l <= r) {
        int mid = l + (r-l)/2;
        if (check(mid)) l = mid+1, ans = mid;
        else r = mid - 1;
    }
    cout << ans << '\n';
    return 0;
}