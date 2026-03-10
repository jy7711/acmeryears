#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    ll x, y, k;
    cin >> x >> y >> k;
    ll kk = k; 
    if (y == 1) {cout << "-1\n"; return;}
    for (int i = 1; i <= x; i++) {
        kk += (kk-1)/(y-1);
        if (kk > 1e12) {cout << "-1\n"; return;}
    }
    if (kk > 1e12) {cout << "-1\n"; return;}
    cout << kk << '\n';
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        ac();
    }
}