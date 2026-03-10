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
        vector<ll> a(n+1,0), b(n+1,0);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        b[1] = 1; int num = 2;
        for (int i = 2; i <= n; i++) {
            if ((a[i]-a[i-1]) >= i) { b[i] = num; num++;}
            else b[i] = b[i-(a[i]-a[i-1])];
        }
        for (int i = 1; i <= n; i++) cout << b[i] << ' ';
        cout << '\n';
    }
    return 0;
}