#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    int h, w, n; cin >> h >> w >> n;
    vector<vector<int>> a(h+1, vector<int> (w+1));
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) cin >> a[i][j];
    }
    vector<int> ans(h+1,0);
    while (n--) {
        int x; cin >> x;
        for (int i = 1; i <= h; i++) {
            for (int j = 1; j <= w; j++) {
                if (a[i][j] == x) ans[i]++;
            }
        }
    }
    int anss = -1;
    for (int i = 1; i <= h; i++) anss = max(anss,ans[i]);
    cout << anss << '\n';
    return 0;
}