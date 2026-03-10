#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int cnt0 = 0, cnt1 = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i]%2 == 0) cnt0++;
            else cnt1++;
        }
        if (cnt0 > 0 && cnt1 > 0) sort(a.begin(),a.end());
        for (int i = 0; i < n; i++) cout << a[i] << ' ';
        cout << '\n';
    }
    return 0;
}