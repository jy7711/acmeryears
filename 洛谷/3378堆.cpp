#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    priority_queue<int, vector<int>, greater<int>> q;
    int n; cin >> n;
    while (n--) {
        int op; cin >> op;
        if (op == 1) {
            int x; cin >> x;
            q.push(x);
        }
        else if (op == 2) {
            cout << q.top() << '\n';
        }
        else q.pop();
    }
    return 0;
}