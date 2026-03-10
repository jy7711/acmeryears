#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool cmp(pair<int,int> j, pair<int,int> y)
{
    return j.first < y.first;
}
void ac()
{
    int n;; cin >> n;
    vector<pair<int,int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        if (i & 1) a[i].second = 1;
        else a[i].second = 0;
    }
    sort(a.begin(),a.end(),cmp);
    for (int i = 1; i < n; i++) {
        if (a[i].second == a[i-1].second) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t; cin >> t;
    while (t--) ac();
    return 0;
}