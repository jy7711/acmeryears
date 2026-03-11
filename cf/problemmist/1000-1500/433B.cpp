#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int n, m; cin >> n;
    vector<ll> a(n+1, 0), b(n+1, 0), c(n+1, 0), d(n+1, 0);
    for (int i = 1; i <= n; i++) cin >> a[i];
    b = a;
    sort(b.begin()+1,b.end());
    c[1] = a[1], d[1] = b[1];
    for (int i = 2; i <= n; i++) c[i] = c[i-1] + a[i], d[i] = d[i-1] + b[i];
    cin >> m;
    for (int i = 0; i < m; i++) {
        int t, l, r; cin >> t >> l >> r;
        if (t == 1) cout << c[r]-c[l-1];
        else cout << d[r] - d[l-1];
        cout << '\n';
    }
    return 0;
}
// Kuriyama Mirai杀死了许多怪物，并获得了许多（即n）石头。 她把石头从1到n编号。 第i块石头的成本是vi。 Kuriyama Mirai想知道一些关于这些石头的事情，所以她会问你两种问题：

// 她会告诉你两个数字，l和r（1 ≤ l ≤ r ≤ n），你应该告诉她。

// 让ui是第i个最便宜的石头的成本（如果我们按不减少的顺序排列所有石头成本，成本将排在第i位）。 这次她会告诉你两个数字，l和r（1 ≤ l ≤ r ≤ n），你应该告诉她。

// 对于每个问题，你都应该给出正确的答案，否则Kuriyama Mirai会说“fuyukai desu”，然后变得不开心。

// 输入的信息

// 第一行包含一个整数n（1 ≤ n ≤ 105）。 第二行包含n个整数：v1、v2、...、vn（1 ≤ vi ≤ 109）—石头的成本。

// 第三行包含一个整数m（1 ≤ m ≤ 105）——Kuriyama Mirai的问题数量。 然后按照m行，每行包含三种整数类型，l和r（1 ≤ l ≤ r ≤ n；1 ≤ 类型 ≤ 2），描述一个问题。 如果类型等于1，那么您应该输出第一个问题的答案，否则您应该输出第二个问题的答案。

// 输出信息

// 打印m行。 每行必须包含一个整数——这是Kuriyama Mirai问题的答案。 按输入顺序打印问题的答案。