#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll n, k; 
vector<pair<int,int>> a;
bool check(int mid)
{
    int cnt = 0, la = 0;
    cout << mid << '\n';
    for (int i = 0; i < a.size(); i++) {
        auto [x, y] = a[i];
        x = max(x, la+1);
        int len = y-x+1;
        int cc = (len+mid-1)/mid;
        la = x + cc*mid; cnt += cc;
        cout << x << ' ' << y << ' ' << cc << ' ' << cnt << la << ' ';
    }
    cout << '\n';
    return cnt <= k;
}
void ac()
{
    cin >> n >> k;
    string s; cin >> s;
    s = ' ' + s;  a.clear();
    int sum = 0; int j = 1;
    for (int i = 1; i <= n; i++) {
        if (s[i] == '0') {
            if (i-j) a.push_back({j,i-1}), j = i+1;
            else j++;
        }
        else sum++; 
    } 
    if (j < n) a.push_back({j,n});
    int l = 1, r = sum, ans = 0;
    while (l <= r) {
        int mid = l + (r-l)/2;
        if (check(mid)) r = mid-1, ans = mid;
        else l = mid+1;
    }
    cout << ans << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t = 1; cin >> t;
    while (t--) ac();
    return 0;
}