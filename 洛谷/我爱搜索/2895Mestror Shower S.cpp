#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int dx[] = {1,-1,0,0,0};
int dy[] = {0,0,1,-1,0};
int a[350][350];
bool b[350][350];
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int m; cin >> m;
    vector<pair<int,pair<int,int>>> boom;
    for (int i = 0; i < 337; i++) 
        for (int j = 0; j < 337; j++) a[i][j] = 1e9;
    for (int i = 0; i < m; i++) {
        int x, y, t; cin >> x >> y >> t;
        boom.push_back({t,{x,y}});
    }
    sort(boom.begin(),boom.end(), greater<>());
    for (int j = 0; j < m; j++) {
        int x = boom[j].second.first;
        int y = boom[j].second.second;
        int t = boom[j].first;
        for (int i = 0; i < 5; i++) {
            int nx = dx[i] + x;
            int ny = dy[i] + y;
            if (nx < 0 || ny < 0) continue;
            a[nx][ny] = t;
        }
    }
    queue<pair<int,pair<int,int>>> q; q.push({0,{0,0}});
    while (!q.empty()) {
        auto t = q.front().first;
        auto[x, y] = q.front().second;
        q.pop();
        if (b[x][y]) continue;
        b[x][y] = 1;
        if (a[x][y] == 1e9) {
            cout << t << '\n';
            return 0;
        }
        for (int i = 0; i < 4; i++) {
            int nx = dx[i] + x;
            int ny = dy[i] + y;
            if (nx < 0 || ny < 0 || b[nx][ny] || t+1 >= a[nx][ny]) continue;
            q.push({t+1,{nx,ny}});
        }
    }
    cout << "-1\n";
    return 0;
}