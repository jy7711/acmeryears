#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int n; cin >> n;
    priority_queue<int, vector<int>, greater<int>> q;
    for (int i = 0; i < n; i++) {
        int op, x; cin >> op >> x;
        if (op == 1) q.push(x);
        else while (!q.empty() && q.top() <= x) q.pop();
        cout << q.size() << '\n';
    }
    return 0;
}