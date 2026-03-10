#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    ll x0,y0,ax,ay,bx,by,xs,ys,t;
    cin >> x0 >> y0 >> ax >> ay >> bx >> by;
    cin >> xs >> ys >> t;
    ll x = x0, y = y0;
    // xi = x0*ax+bx, yi = y0*ay+by
    vector<ll> a, b;
    for (int i = 0; i < 67; i++) {
        a.push_back(x); b.push_back(y);
        x = a[i]*ax + bx;
        y = b[i]*ay + by;
        if (x-xs > t || y-ys > t) break;
    }

    ll ans = 0;
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a.size(); j++) {
            if (abs(xs-a[j]) + abs(ys-b[j]) + abs(a[j]-a[i]) + abs(b[j]-b[i]) <= t) {
                ans = max(ans,abs(j-i)+1ll);
            }
        }
    }

    cout << ans << '\n';

    return 0;
}