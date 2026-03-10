#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int x, y; cin >> x >> y;
        cout << min(n,y+x/2) << '\n';
    }
    return 0;
}