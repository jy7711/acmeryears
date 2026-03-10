#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n, x, y; cin >> n >> x >> y;
    vector<int> a(n+1, 0);
    deque<int> d1, d2;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= x; i++) d1.emplace_back(a[i]);
    for (int i = x+1; i <= y; i++) d2.emplace_back(a[i]);
    for (int i = y+1; i <= n; i++) d1.emplace_back(a[i]);
    int mx = 1e9 + 7; 
    for (auto x : d2) mx = min(mx, x);
    while (!d2.empty() && d2.front() != mx) {
        int x = d2.front();
        d2.pop_front();
        d2.emplace_back(x);
    }
    while (!d1.empty() && d1.front() < mx) {
        cout << d1.front() << ' ';
        d1.pop_front();
    }
    while (!d2.empty()) {
        cout << d2.front() << ' ';
        d2.pop_front();
    }
    while (!d1.empty()) {
        cout << d1.front() << ' ';
        d1.pop_front();
    }
    cout << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t = 1; cin >> t;
    while (t--) ac();
    return 0;
}