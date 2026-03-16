#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n; 
bool visl[37], visd1[37], visd2[37];
vector<vector<int>> ans;
void dfs(vector<int> s, int h)
{
    //笨蛋用string存遇到两位数调成啥了
    //这么存好神奇
    //cout << h << ' ' << s << '\n';
    if (s.size() >= n) {
        ans.push_back(s);
        return;
    }
    if (h > n) return;
    for (int i = 1; i <= n; i++) {
        if (visl[i] || visd1[15+(i-h)] || visd2[i+h]) continue;
        visl[i] = 1, visd1[15+(i-h)] = 1, visd2[i+h] = 1;
        vector<int> ss = s; ss.push_back(i);
        dfs(ss, h+1);
        visl[i] = 0, visd1[15+(i-h)] = 0, visd2[i+h] = 0;
    }
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    cin >> n; vector<int> s;
    dfs(s, 1);
    sort(ans.begin(),ans.end());
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < ans[i].size(); j++) cout << ans[i][j] << ' ';
        cout << '\n';
    }
    cout << ans.size() << '\n';
    return 0;
}