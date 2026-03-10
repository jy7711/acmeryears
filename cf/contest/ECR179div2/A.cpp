#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll a[70], b[70];
void ac()
{
    ll n; cin >> n;
    //if (n == 1) {cout << "3\n"; return;}
    for (int i = 1; i < 67; i++) {
        if (a[i] >= n) {cout << i+2 << '\n'; return;}
    }
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    a[1] = 1; a[2] = 1; //a[3] = 2;
    for (int i = 3; i < 67; i++) {
        a[i] = a[i-2]*2+1;
    }
    // for (int i = 2; i < 67; i++) cout << a[i] << ' ';
    // cout << '\n';
    int t; cin >> t;
    while (t--) ac();
    return 0;
}