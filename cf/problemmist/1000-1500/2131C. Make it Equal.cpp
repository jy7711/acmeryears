#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
            
        int n, k; cin >> n >> k;
        vector<int> a, b; int x;
        for (int i = 0; i < n; i++) {
            cin >> x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++) {
            cin >> x;
            b.push_back(x);
        }
        for (int i = 0; i < n; i++) {
            if (a[i]%k > k/2) a[i] = k-a[i]%k;
            else a[i] = a[i]%k;
        }
        for (int i = 0; i < n; i++) {
            if (b[i]%k > k/2) b[i] = k-b[i]%k;
            else b[i] = b[i]%k;
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        bool g = 1;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {g = 0; break;}
        }
        if (g) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}