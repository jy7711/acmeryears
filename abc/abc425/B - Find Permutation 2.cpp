#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int n; cin >> n;
    vector<int> a(n+1);
    vector<int> mp(12);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] == -1) a[i]+= 12;
    }
    for (int i = 1; i <= n; i++) {
        mp[a[i]]++;
    }
    bool g = 0;
    vector<int> b;
    for (int i = 1; i <= n; i++) {
        if (mp[i] > 1) g = 1;
        if (mp[i] == 0) b.push_back(i);
    }
    if (g) { cout << "No"; return 0; }
    else cout << "Yes\n";
    int j = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] == 11) {cout << b[j] << ' '; j++;}
        else cout << a[i] << ' ';
    }
    return 0;
}