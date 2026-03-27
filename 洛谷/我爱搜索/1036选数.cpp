#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<bool> b(30, 0);
int n, k;
ll ans = 0;
vector<int> a(30, 0);
bool p(int x)
{
    if (x == 1) return 0; 
	for (int i = 2; i * i <= x; ++i)
		if (x % i == 0)
			return 0;
	return 1;
}
void dfs(int h, int sum, int cc)
{
    if (h == k) {
        if (p(sum)) ans++;
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
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    dfs(0, 0, 1);
    cout << ans << '\n';
    return 0;
}