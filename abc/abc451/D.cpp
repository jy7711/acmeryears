#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<int> a(1, 1), len(1, 1), ten(1, 1), ans;
void dfs(int now) 
{
    if (now) ans.push_back(now);
    for (int i = 0; i < a.size(); i++) {
        if (now * ten[len[i]] +a[i] > 1e9) break; 
        dfs(now*ten[len[i]] + a[i]);
    }
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int n; cin >> n;
    while (a.back() < 1e9) a.push_back(a.back()*2), len.push_back(to_string(a.back()).length());
    while (ten.back() < 1e9) ten.push_back(ten.back()*10);
    dfs(0);
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    //for (int i = 0; i < ans.size(); i++) cout << ans[i] << ' ';
    cout << ans[n-1]; 
    return 0;
}