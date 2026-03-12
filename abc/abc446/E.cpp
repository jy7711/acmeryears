#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int m, a, b; cin >> m >> a >> b;
    vector<vector<int>> s(m*m+7);
    vector<bool> vis(m*m+7, 0);
    for (int i = 0; i < m; i++) { 
        for (int j = 0; j < m; j++) {
            int w = (a*j + b*i) % m; //下一阶段余数
            int cur = i*m + j; //状压，从0 - m*m 的每个值对应 s[i][j] 
            int nex = j*m + w; //下一个位置
            s[nex].push_back(cur);
        }
    }

    queue<int> q;

    for (int i = 0; i < m; i++) {
        int s1 = i;
        if (!vis[s1]) {
            vis[s1] = 1;
            q.push(s1);
        }
        int s2 = i*m;
        if (!vis[s2]) {
            vis[s2] = 1;
            q.push(s2);
        }
    }

    while (!q.empty()) {
        int x = q.front();
        q.pop();
        //每个“坏状态”找到它前面一个也标记为坏
        for (int cc : s[x]) {
            if (!vis[cc]) {
                vis[cc] = 1;
                q.push(cc);
            }
        }
    }

    int ans = 0;
    //记录好状态的个数即为ans
    for (int i = 0; i < m*m; i++) {
        if (!vis[i]) ans++;
    }
    cout << ans << '\n';
    return 0;
}