#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll a, b, x, y;
void exgcd(ll a, ll b)
{
    if (!b) {
        x = 1;
        y = 0;
        return;
    }
    exgcd(b, a%b);
    ll t = x;
    x = y;
    y = t - a/b*y;
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    cin >> a >> b;
    exgcd(a, b);
    x = (x%b + b) % b;
    cout << x << '\n';
    return 0;
}