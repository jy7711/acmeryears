#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 998244353;
void ac()
{
    int a, k; cin >> a >> k;
    queue<pair<int,int>> q;
    q.push({a,0});
    map<int,int> mp;
    while (!q.empty()) {
        if (mp[q.front().first]) {q.pop(); continue;}
        //if (q.front().first == 0) break;
        mp[q.front().first]++;
        int cnt = q.front().second+1;
        int x = q.front().first;
        q.pop();
        if (x == k) {
            cout << cnt-1 << '\n';
            return;
        }
        q.push({ceil((double)x/2),cnt});
        q.push({floor((double)x/2),cnt});
        //cout << x << ' ' << cnt << '\n';
    }
    cout << "-1\n";
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int t = 1; cin >> t;
    while (t--) {
        ac();
    }   
    return 0;
}
