#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int ans = 0;
        vector<int> a(n+2,0), b(n+1,0);
        for (int i = 1; i <= n; i++) cin >> a[i];
        if (a[1] == -1 && a[n] == -1) {
            a[1] = 0, a[n] = 0;
        }
        else if (a[1] == -1 || a[n] == -1) {
            if (a[1] == -1) a[1] = a[n];
            else a[n] = a[1];
        }  
        for (int i = 2; i < n; i++) {if (a[i] == -1) a[i] = 0;}
        cout << abs(a[n]- a[1])<< '\n';
        for (int i = 1; i <= n; i++) cout << a[i] << ' ';
        cout << '\n'; 
    }
    return 0;
}