#include <bits/stdc++.h>
using namespace std;
using ll = long long;
struct jy {
    ll h, w, i;
};

bool chp(jy j, jy y)
{
    if (j.h == y.h) return j.w > y.w;
    return j.h > y.h;
}

bool cwp(jy j, jy y)
{
    if (j.w == y.w) return j.h > y.h;
    return j.w > y.w; 
}

void ac()
{
    ll h, w, n; cin >> h >> w >> n;
    vector<jy> a, b;
    map<int, pair<int,int>> mp;
    for (ll i = 1; i <= n; i++) {
        ll h, w; cin >> h >> w;
        a.push_back({h, w, i});
    }
    b = a;
    sort(a.begin(), a.end(), chp);
    sort(b.begin(), b.end(), cwp);
    
    ll sum = h*w;
    ll hh = 0, ww = 0, x = 1, y = 1;

    while (sum) {
        while (hh < n && mp.count(a[hh].i)) hh++;
        while (ww < n && mp.count(b[ww].i)) ww++;
        if (hh < n && a[hh].h == h) {
            sum -= a[hh].h * a[hh].w;
            w -= a[hh].w;
            mp[a[hh].i] = {x,y};
            y += a[hh].w;
            hh++;
        } 
        else if (ww < n && b[ww].w == w) {
            sum -= b[ww].h * b[ww].w;
            h -= b[ww].h;
            mp[b[ww].i] = {x, y};
            x += b[ww].h;
            ww++;
        }
    }

    for (auto [x, y] : mp) cout << y.first << ' ' << y.second << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    ac();
    return 0;
}