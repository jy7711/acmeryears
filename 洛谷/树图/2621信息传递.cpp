#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e5 + 7;
int fa[N], cnt, ans = N;

int find(int x) {
    cnt++;
    return fa[x] == x ? x : find(fa[x]);
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(0);

    int n; cin >> n;
    for (int i = 1; i <= n; i++) fa[i] = i;

    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        cnt = 0;
        find(x) == i ? ans = min(ans, cnt) : fa[i] = x;
        //cout << cnt << ' ' << i << '\n';
    }
    cout << ans << '\n';
    return 0;
}