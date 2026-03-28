#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    ll n, k; cin >> n >> k;
    map<int,int> mp1, mp2;
    vector<int> a(n+1, 0), b(n+1, 0);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
    ll e = 0; 
    for (int i = 1; i <= k; i++) {
        mp1[a[i]]++;
        if (b[i] == -1) e++;
        else mp2[b[i]]++;
    }
    int l = 1;
    for (int i = 1; i <= k; i++) {
        while (mp1[a[l]] == mp2[a[l]] && l < k) l++;
        if (b[i] == -1) b[i] = a[l], l++, mp2[b[i]]++;
    }
    for (auto [x, y] : mp1) {
        if (y != mp2[x]) {
            cout << "NO\n";
            return;
        }
    }

    // for (int i = 1; i <= n; i++) cout << a[i] << ' ';
    // cout << '\n';
    // for (int i = 1; i <= n; i++) cout << b[i] << ' ';
    // cout << '\n';
    for (int i = k+1; i <= n; i++) {
        mp1[a[i-k]]--;
        mp2[b[i-k]]--;
        mp1[a[i]]++;
        if (b[i] == -1) {
            if (mp2[b[i-k]] < mp1[b[i-k]]) b[i] = b[i-k], mp2[b[i-k]]++;
            else b[i] = a[i], mp2[b[i]]++;
        }
        else mp2[b[i]]++;
        if (mp1[a[i]] != mp2[a[i]] || mp1[a[i-k]] != mp2[a[i-k]] || mp1[b[i-k]] != mp2[b[i-k]]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t = 1; cin >> t;
    while (t--) ac();
    return 0;
}