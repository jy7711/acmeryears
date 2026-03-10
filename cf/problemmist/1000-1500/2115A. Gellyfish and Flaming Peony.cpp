#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int gcd (int a, int b)
{
    while (b) {
        int t = b;
        b = a%b;
        a = t;
    }
    return a;
}
void ac1()
{
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int g = a[0];
    map<int,int> mp;
    for (int i = 1; i < n; i++) g = gcd(g,a[i]);
    for (int i = 0; i < n; i++) mp[a[i]]++;
    if (mp[g]) {
        cout << n - mp[g] << '\n';
        return;
    } 
    vector<int> b(5007,-1);
    queue<pair<int,int>> q;
    for (int i = 0; i < n; i++) q.push({a[i],0});
    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();
        if (b[x] != -1) continue;
        b[x] = y;
        if (x == g) break;
        for (int i = 0; i < n; i++) {
            int now = gcd(x,a[i]);
            if (b[now] == -1) q.push({now,y+1});
        }
    }
    cout << n + b[g] - 1 << '\n'; 
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t; cin >> t; 
    while (t--) ac1(); //ac2
    return 0;
}