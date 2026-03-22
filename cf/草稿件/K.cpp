//https://codeforces.com/gym/680198/problem/K
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll x, y;
vector<int> ans;
void dfs(ll x, ll y) 
{
    //cout << x << ' ' << y << '\n';
    if (y == 1) {
        ans.push_back(x);
        return;
    }
    ans.push_back(x/y);
    dfs(y,x%y);
    return;
}
void ac()
{
    ans.clear();
    cin >> x >> y;
    dfs(x,y);
    cout << ans.size()-1 << ' ';
    for (int i = 0; i < ans.size(); i++) cout << ans[i] << ' ';
    cout << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t = 1; cin >> t;
    while (t--) ac();
    return 0;
}