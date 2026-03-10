#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        bool g = 0; int mn = a[0];
        for (int i = 0; i < n-1; i++) {
            if (mn <= (a[i+1])/2) {g = 1; break;}
            mn = min(mn,a[i+1]);
        }
        if (g) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}