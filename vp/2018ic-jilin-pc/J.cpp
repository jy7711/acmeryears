#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    ll a, b; cin >> a >> b;
    if (a & 1) {
        if (a > b) cout << "1";
        else cout << "2";
    }
    else {
        if (a > b) cout << "2";
        else cout << "1";
    }
    return 0;
}