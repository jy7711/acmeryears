#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    ll x, y, z; cin >> x >> y >> z;
    if (x+y == z) cout << z+1 << '\n'; 
    else if (x > z && y > z) cout << x+y-z << '\n';
    else if (x <= z && x + y > z && y-(z-x) > z) cout << y-(z-x) << '\n';
    else cout << "-1\n";
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t = 1; cin >> t;
    while (t--) ac();
    return 0;
}