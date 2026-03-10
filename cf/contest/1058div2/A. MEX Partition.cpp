#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n), mp(107,0);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        for (int i = 0; i <= n; i++) {
            if (mp[i] == 0) { cout << i << '\n'; break; } 
        }
    }
    return 0;
}