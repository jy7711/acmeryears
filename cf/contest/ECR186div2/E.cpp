#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    ll n, m, k; cin >> n >> m >> k;
    //n个朋友 m个盒子 k枚硬币
    vector<int> a(m), x(n), y(n), z(n);
    //x漂亮的盒子 y枚硬币的礼物 礼物价值z
    //先把礼物买完，捡贵的装盒，剩下的按便宜的提价，即是最后高兴人数
    for (int i = 0; i < m; i++) cin >> a[i];
    sort(a.begin(),a.end());
    vector<pair<int,int>> b;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i] >> z[i];
        k -= y[i];
        b.push_back({x[i],z[i]-y[i]});
    }
    sort(b.begin(),b.end());
    priority_queue<int> pq;
    int j = 0; ll ans = 0;
    for (int i = 0; i < m; i++) {
        while (j < n && b[j].first <= a[i]) {
            pq.push(b[j++].second);
        }
        if (!pq.empty()) pq.pop(), ans++;
    }
    
    while (j < n) pq.push(b[j++].second);

    vector<int> last;
    while (!pq.empty()) last.push_back(pq.top()), pq.pop();
    reverse(last.begin(),last.end());

    for (int c : last) {
        if (k >= c) k-=c, ans++;
    }
    
    cout << ans << '\n';

    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t;
    while (t--) ac();
    return 0;
}