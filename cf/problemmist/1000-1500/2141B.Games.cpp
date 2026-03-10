#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t; cin >> t;
    while (t--) {
        int n,m; cin >> n >> m;
        vector<int> a(n), b(m), c;
        map<int,int> mp;
        for (int i = 0; i < n; i++) { cin >> a[i]; mp[a[i]]++; }
        for (int i = 0; i < m; i++) { cin >> b[i]; mp[b[i]]++; }
        for (auto &ele : mp) {
            if (ele.second == 2) c.push_back(ele.second);
        }
        if (a.size() <= b.size()) cout << (a.size()-c.size())*2+1 << '\n';
        else cout << (b.size()-c.size()+1)*2 << '\n';
    }
    return 0;
}