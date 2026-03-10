#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int x, y; cin >> x >> y;
    if ((x+y)%3 != 0 || x < y*2 || (y < 0 && x < abs(y*4))) {
        cout << "NO\n";
        return;
    }
    else cout << "YES\n";
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    while (t--) ac();
    return 0;
}