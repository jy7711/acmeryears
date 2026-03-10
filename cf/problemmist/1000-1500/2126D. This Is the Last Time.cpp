#include <bits/stdc++.h>
using namespace std;
struct jy {
    int l, r, an;
};
bool cmp(jy j, jy y)
{
    if (j.an == y.an) return j.l < y.l;
    return j.an < y.an;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<jy> a(n);
        for (int i = 0; i < n; i++) cin >> a[i].l >> a[i].r >> a[i].an; 
        sort(a.begin(),a.end(),cmp);
        for (int i = 0; i < n; i++) {
            if (a[i].an > k && k >= a[i].l && k <= a[i].r) k = a[i].an; 
        }
        cout << k << '\n';
    }
    return 0;
}