#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        ll a, b; cin >> a >> b;
        if (a%2 == 1 && b%2 == 1) cout << a*b+1 << '\n';
        else if (a%2 == 0 && b%2 == 0) {
            if (b%4 == 0) cout << max(a+b,2+a*b/2) << '\n';
            else cout << max(a+b,2+a*b/2) << '\n';
        }
        else {
            if (b%4 == 0) cout << 2+a*b/2 << '\n';
            else cout << -1 << '\n'; 
        }
    }
    return 0;
}