#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n, m, l;
    cin >> n >> m >> l;
    vector<int> a(n + 1, 0);
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int yu = l - a[n];
    //cout << yu << ' ';
    vector<int> b;
    for (int i = 1; i <= n; i++) {
        if (i == 1) b.push_back(a[i]);
        else b.push_back({a[i] - a[i - 1]});
    }

    // for (int x : b) cout << x << ' ';
    // cout << '\n';
    
    vector<int> c(n, 0);
    c[n-1] = min(m, 2);
    for (int i = n - 2; i >= 0; i--) c[i] = min(c[i + 1] + 1, m);

    // for (int x : c) cout << x << ' ';
    // cout << '\n';

    multiset<int> s;

    for (int i = 0; i < n; i++) {
        if (b[i] == 0) continue;
        while (s.size() < c[i]) s.insert(0);
        while (s.size() > c[i]) s.erase(s.begin());

        // 将 b[i] 分配给当前所有桶，使最小值最大
        vector<ll> v(s.begin(), s.end());
        int k = v.size();
        sort(v.begin(), v.end());
        ll remaining = b[i];
        int j;
        for (j = 0; j < k - 1; j++) {
            ll diff = v[j + 1] - v[j];
            ll need = diff * (j + 1);
            if (remaining >= need) {
                remaining -= need;
                // 将前 j+1 个数提升到 v[j+1]
                for (int t = 0; t <= j; t++) v[t] = v[j + 1];
            } 
            else break;
        }
        if (j == k - 1) {
            // 所有数已相等，剩余资源平均分配
            ll avg = remaining / k;
            ll r = remaining % k;
            for (int t = 0; t < k; t++) {
                v[t] += avg;
                if (t >= k - r) v[t] += 1;
            }
        } 
        else {
            // 前 j+1 个数分配剩余资源
            ll each = remaining / (j + 1);
            ll r = remaining % (j + 1);
            for (int t = 0; t <= j; t++) {
                v[t] += each;
                if (t >= (j + 1) - r) v[t] += 1;
            }
            // 后面的数保持不变
        }
        // 重新放回 multiset
        s.clear();
        for (ll x : v) s.insert(x);

        // for (int cc : s) cout << cc << ' ';
        // cout << '\n';
        
        s.erase(--s.end());
    }
    cout << (s.size() ? *s.rbegin() : 0) + yu << '\n';
    //cout << '\n';
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--) ac();
    return 0;
}
// 0 0 1 1 1  3
// 3 3 3 3 4  16
// 3 3 3 3 3  15
// 4 4 4 4 4  20
// 4 5 5 5 5  24
// 6 7 7 7    27
// 7 7 7      21
// 9 10       19
// 9 + 10