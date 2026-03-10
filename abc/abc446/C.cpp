#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n, d; cin >> n >> d;
    vector<pair<int,int>> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++) cin >> a[i].second, a[i].first = i+1;
    for (int i = 0; i < n; i++) cin >> b[i];
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
    // for (int i = 0; i < n; i++) q.push({a[i].first,a[i].second});
    // while (!q.empty()) {
    //     auto [x, y] = q.top();
    //     cout << x << ' ' << y << '\t';
    //     q.pop();
    // }
    // cout << '\n';
    for (int i = 0; i < n; i++) {
        q.push({a[i].first,a[i].second});
        while (b[i]) {
            auto [x, y] = q.top();
            q.pop();
            if (y > b[i]) {q.push({x,y-b[i]}); b[i] = 0;}
            else b[i] -= y;           
        }
        while (i-q.top().first+2 > d) q.pop();
    }
    int res = 0;
    while (!q.empty()) {
        res += q.top().second;
        q.pop();
    }
    cout << res << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t; cin >> t;
    while (t--) ac();
    return 0;
}
