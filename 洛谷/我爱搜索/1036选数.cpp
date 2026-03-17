#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<bool> p(5e6+1000, 1), b(30, 0);
int n, k;
ll ans = 0;
vector<int> a(30, 0);
void prime()
{
    p[1] = 0;
    for (int i = 2; i*i <= 5e6+100; i++) {
        if (p[i]) {
            for (int j = i*i; j <= 5e6+100; j+=i) p[j] =  0;
        }
    }
    return;
}
void dfs(int h, int sum, int cc)
{
    if (h == k) {
        if (p[sum]) ans++;
        return;
    }
    //已经选了h个数， 还有k-h-1个数要选择
    //不重复枚举
    for (int i = cc; i <= n-k+h+1; i++) dfs(h+1, sum+a[i], i+1);
    return;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    prime();
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    dfs(0, 0, 1);
    cout << ans << '\n';
    return 0;
}