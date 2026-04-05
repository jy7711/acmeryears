#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    ll x, y; cin >> x >> y;
    if (x > y || x == 0 && y%2 == 0) {
        cout << "NO\n";
        return;
    }
    else cout << "YES\n";
    ll last = 1, cnt = 2;
    if ((x+y)%2 == 0) x--;
    else y--;
    for (int i = 0; i < x*2; i++) {
        cout << last << ' ' << cnt << '\n';
        last = cnt++;
    }
    for (int i = 0; i < y-x; i++) {
        cout << "1 " << cnt++ << '\n';
    }
    return;
}
int main() 
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t = 1; cin >> t;
    while (t--) ac();
    return 0;
}