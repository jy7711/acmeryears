#include <bits/stdc++.h>
using namespace std;
int t, n;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n+1);
        for (int i = 1; i <= n; i++) cin >> a[i];
        cout << min(a[1]*2,a[1]+a[2]) << '\n';
    }
}