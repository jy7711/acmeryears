#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        //cout << max({n*n*3-n-1,n*n*4-n-4,n*n*5-5-n*5}) << '\n';
        if (n <= 2) cout << n*n*3-n-1 << '\n';
        else if (n >= 3 && n <= 4) cout << n*n*4-n-4 << '\n';
        else cout << n*n*5-5-n*5 << '\n';
    }
    return 0;
}