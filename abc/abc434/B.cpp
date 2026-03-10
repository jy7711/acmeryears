#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    int n, m; cin >> n >> m;
    vector<int> a(n), b(n);
    vector<int> c(n+1,0), d(n+1,0);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        c[a[i]] += b[i];
        d[a[i]]++;
    }
    for (int i = 0; i <= n; i++) {
        if (c[i] != 0) printf("%.20f\n",(double)c[i]/d[i]);
    }
    return 0;
}