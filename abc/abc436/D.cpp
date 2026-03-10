#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int dx[] = {-1,1,0,0};
int dy[] = {0,0,1,-1};
void ac()
{
    int n, m; cin >> n >> m;
    vector<vector<char>> a(n+1, vector<char> (m+1));
    vector<vector<bool>> b(n+1, vector<bool> (m+1,0));
    vector<vector<int>> c(n+1, vector<int> (m+1,1e9));
    vector<vector<pair<int,int>>> d(26);
    vector<bool> e(26,0);
    for (int i = 1; i <= n; i++) { 
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            if (a[i][j] >= 'a' && a[i][j] <= 'z') d[a[i][j]-'a'].push_back({i,j});
            if (a[i][j] == '#') b[i][j] = 1;
        }
    }
    queue<pair<int,int>> q;
    q.push({1,1}); c[1][1] = 0;
    while (!q.empty()) {
        int x = q.front().first, y = q.front().second;
        q.pop();
        if (b[x][y]) continue;
        b[x][y] = 1;
        for (int i = 0; i < 4; i++) {
            int wx = x + dx[i], xy = y + dy[i];
            if (wx < 1 || wx > n || xy < 1 || xy > m) continue;
            if (b[wx][xy]) continue;
            q.push({wx,xy}); c[wx][xy] = min(c[x][y] + 1, c[wx][xy]);
        }
        if (a[x][y] >= 'a' && a[x][y] <= 'z' && !e[a[x][y]-'a']) {
            e[a[x][y]-'a'] = 1;
            for (auto[wx,xy] : d[a[x][y]-'a']) {
                if (wx < 1 || wx > n || xy < 1 || xy > m) continue;
                if (b[wx][xy]) continue;
                q.push({wx,xy}); c[wx][xy] = min(c[x][y] + 1, c[wx][xy]);
            }
        }
        if (c[n][m] != 1e9) break;
        //cout << x << ' ' << y << '\n';
        // for (int i = 1; i <= n; i++) {
        //     for (int j = 1; j <= m; j++) cout << b[i][j];
        //     cout << '\n';
        // }
    }
    if (c[n][m] == 1e9) cout << "-1\n";
    else cout << c[n][m] << '\n';
    return;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int t = 1; 
    while (t--) ac();
    return 0;
}