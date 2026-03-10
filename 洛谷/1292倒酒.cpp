#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll a, b, x, y;
ll exgcd(ll a, ll b)
{
    if (!b) {
        x = 1;
        y = 0;
        return a;
    }
    ll g = exgcd(b, a%b);
    ll t = x;
    x = y;
    y = t - a/b*y;
    return g;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin >> a >> b;
    ll g = exgcd(a, b);
    // ax + by = gcd(a, b);
    cout << g << '\n';
    
    ll xans = ((-x)%(b/g)+(b/g))%(b/g);
    ll yans = (g+a*xans)/b;
    cout << xans << ' ' << yans << '\n';
    return 0;
}