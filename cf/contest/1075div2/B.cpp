#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool cmp(pair<int,int> j, pair<int,int> y)
{
    return j.first > y.first;
}
struct jy{
    ll a, b, c;
};
void ac()
{
    ll n, x; cin >> n >> x;
    vector<jy> d(n);
    ll ans = 0; ll c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++) {
        cin >> d[i].a >> d[i].b >> d[i].c; 
        if (d[i].b > 1) {
            ans += (d[i].b - 1)*d[i].a; 
        } 
        if (d[i].a > d[i].c) c1++;
        if (d[i].a*d[i].b-d[i].c > 0) c2++;
    }
    //cout << ans << "ans ";
    if (ans >= x) {
        cout << "0\n";
        return;
    }
    if (!c1 && !c2) {
        cout << "-1\n";
        return;
    }
    
    ll cnt = 1e18+7;
    for (int i = 0; i < n; i++) {
        if (d[i].a > d[i].c || d[i].a*d[i].b-d[i].c > 0) {
            cnt = min((x-ans+d[i].a*d[i].b-d[i].c-1)/(d[i].a*d[i].b-d[i].c),cnt);
        }
    }
    cout << cnt << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t = 1; 
    cin >> t;
    while (t--) ac();
    return 0;
}