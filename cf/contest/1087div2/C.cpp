#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void ac()
{
    int n; cin >> n;
    bool gg = 0;
    for (int i = 1; i <= n; ++i) {
        int x = 2 * i - 1, y = 2 * i;
        cout << "? " << x << " " << y << endl;
        int res; cin >> res;
        if (res == 1) {
            cout << "! " << x << endl;
            gg = 1;
            break;
        }
    }

    if (!gg) {
        cout << "? 2 3" << endl;
        int res;
        cin >> res;
        if (res == 1) {
            cout << "! 2" << endl;
        } else {
            cout << "! 1" << endl;
        }
    }
    return;
}
int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int t = 1; cin >> t;
    while (t--) ac();
    return 0;
}