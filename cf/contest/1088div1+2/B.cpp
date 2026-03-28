#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 676767677;
void ac()
{
    ll x, y; cin >> x >> y;
    int cc = min(x, y);
    x -= cc; y -= cc;
    ll n = abs(x+y);
    vector<int> vec;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            vec.push_back(i);
            if (i * i != n) vec.push_back(n / i);
        }
    }
    cout << (vec.size() ? vec.size() : 1) << '\n';
    if (x) {
        for (int i = 0; i < cc; i++) cout << "-1 ";
        for (int i = 0; i < cc+x; i++) cout << "1 ";
    }
    else {
        for (int i = 0; i < cc; i++) cout << "1 ";
        for (int i = 0; i < cc+y; i++) cout << "-1 ";
        
    }
    cout << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t = 1; cin >> t;
    while (t--) ac();
    return 0;
}