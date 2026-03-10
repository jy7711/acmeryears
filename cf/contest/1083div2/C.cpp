#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool cmp(vector<int>& x, vector<int>& y) {
    int i = x.size() - 1, j = y.size() - 1;
    while (i >= 0 && j >= 0) {
        if (x[i] != y[j]) return x[i] < y[j];
        i--; j--;
    }
    return i < 0; 
}
void ac() 
{
    int n; cin >> n;
    vector<vector<int>> a(n);
    for (int i = 0; i < n; i++) {
        int m; cin >> m;
        vector<int> b(m);
        for (int j = 0; j < m; j++) cin >> b[j];
        unordered_set<int> s;
        vector<int> c;
        for (int j = m-1; j >= 0; j--) {
            if (s.find(b[j]) == s.end()) {
                s.insert(b[j]);
                c.push_back(b[j]);
            }
        }
        reverse(c.begin(),c.end());
        a[i] = c;
    }
    
    vector<bool> p(n,0);
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        int cc = -1;
        for (int j = 0; j < n;j++) {
            if (!p[j] && (cc == -1 || cmp(a[j], a[cc]))) cc = j;
        }
        for (int j = a[cc].size() - 1; j >= 0; j--) ans.push_back(a[cc][j]);
        p[cc] = 1;
        unordered_set<int> s(a[cc].begin(),a[cc].end());
        for (int j = 0; j < n; j++) {
            if (p[j]) continue;
            vector<int> b;
            for (int x : a[j]) {
                if (s.find(x) == s.end()) b.push_back(x);
            }
            a[j].swap(b);
        }
    }
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << ' ';
    cout << '\n';
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